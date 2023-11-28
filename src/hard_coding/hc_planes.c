#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#include "../structs.h"
#include "../helper_functions.h"

int random_num(int range, int minimum) {
  return ((int)rand() * RAND_MAX) % (range - 1) + minimum;
}
float frand(void) {
  return ((double)rand() / RAND_MAX);
}

int main(void) {
  int num_plane = 20;
  Plane planes[num_plane];
  FILE* three_letter_file = fopen("three_letter.txt", "r");
  three_letter_file == NULL ? exit(1) : nothing();
  for (int i = 0; i < num_plane; i++) {
    char three_letter[3];
    fscanf(three_letter_file, "%s\n", three_letter);
    int four_num = random_num(9999, 0);
    char four_num_string[4]; sprintf(four_num_string, "%d", four_num);
    char _identifier[7]; int num_length = strlen(four_num_string);
    switch (num_length) {
      case 1: sprintf(_identifier, "%s%s", "000", four_num_string);
      case 2: sprintf(_identifier, "%s%s", "00", four_num_string);
      case 3: sprintf(_identifier, "%s%s", "0", four_num_string);
      default: nothing();
    }
    strcpy(planes[i].identifier, _identifier);
  } fclose(three_letter_file);
  // FILE* identifier = fopen("plane_identifiers.txt", "r");
  srand(time(NULL));
  for (int i = 0; i < num_plane; i++) {
    planes[i].range = random_num(3400, 6000);
    planes[i].range_left = (int) planes[i].range * frand();
    planes[i].max_seats = random_num(250, 50);
  }
  return 0;
}
/*
 * 
  FILE* file = fopen("data.txt", "r");
  file == NULL ?  exit(1) : nothing() ;
      fscanf(file, "%d ", &array[i][j]);
*/
