#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#include "../structs.h"
#include "../helper_functions.h"

int random_num(int range, int minimum) {
  return (int) (rand()) % range + minimum;
}
float frand(void) {
  return ((double)rand() / RAND_MAX);
}

void reverseString(char str[]) {
  int length = strlen(str); int start = 0; int end = length - 1;
  while (start < end) {
    char temp = str[start];
    str[start] = str[end]; str[end] = temp;
    start++; end--;
  }
}

int main(void) {
  int num_plane = 20;
  Plane planes[num_plane];
  FILE* three_letter_file = fopen("three_letter.txt", "r");
  three_letter_file == NULL ? exit(1) : nothing();
  for (int i = 0; i < num_plane; i++) {
    char three_letter[4]; fscanf(three_letter_file, "%s\n", three_letter);
    int four_num = random_num(999, 0);
    char serial[5]; sprintf(serial, "%d", four_num);
    int num_length_left = strlen(serial);
    // printf("%d\n", num_length_left);
    char one_zero[2] = "0"; char two_zero[3] = "00"; char three_zero[4] = "000";
    switch (num_length_left) {
      case 4:
        break;
      case 3: 
        strcat(serial, one_zero); break;
      case 2: 
        strcat(serial, two_zero); break;
      case 1: 
        strcat(serial, three_zero); break;
      default: 
        printf("nicer\n"); break;
    }
    // now i need to reverse the string
    printf("Before reversing %s\n", serial);
    reverseString(serial); 
    printf("After reversing %s\n", serial);
    char _identifier[8];
    strcat(three_letter, serial); strcat(three_letter, "\0");
    strcpy(_identifier, three_letter);
    strcpy(planes[i].identifier, _identifier);
  } fclose(three_letter_file);
  FILE* type_file = fopen("plane_identifiers.txt", "r");
  type_file == NULL ? exit(1) : nothing();
  for (int i = 0; i < num_plane; i++) {
    char type_code[4]; fscanf(type_file, "%s\n", type_code);
    strcpy(planes[i].type, type_code);
  } fclose(type_file);
  srand(time(NULL));
  for (int i = 0; i < num_plane; i++) {
    planes[i].range = random_num(3400, 6000);
    planes[i].range_left = (int) planes[i].range * frand();
    planes[i].max_seats = random_num(250, 50);
  }

  for (int i = 0; i < 2; i++) {
    printf("%s --- %s -- %d -- %d -- %d\n", 
        planes[i].identifier, planes[i].type, 
        planes[i].range, planes[i].range_left,
        planes[i].max_seats);
  }
  return 0;
}
