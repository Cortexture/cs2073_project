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
  int num_plane = 50;
  Plane planes[num_plane];
  FILE* three_letter_file = fopen("three_letter.txt", "r");
  three_letter_file == NULL ? exit(1) : nothing();
  for (int i = 0; i < num_plane; i++) {
    char three_letter[3];
    fscanf(three_letter_file, "%s\n", three_letter);
    int four_num = random_num(9999, 0);
    int size = (int)((ceil(log10(four_num)+1)*sizeof(char)));
    char four_num_string[4];
    itoa(four_num, four_num_string, size);
  }
  FILE* identifier = fopen("plane_identifiers.txt", "r");
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
