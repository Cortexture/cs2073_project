#include <stdio.h>
#include <time.h>

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
  srand(time(NULL));
  for (int i = 0; i < num_plane; i++) {
    planes[i].range = random_num(3400, 6000);
  }
  return 0;
}
