#include <stdio.h>
#include "../structs.h"
#include "../helper_functions.h"

int hc_planes(void) {
  int num_plane = 50;
  Plane planes[num_plane];
  for (int i = 0; i < num_plane; i++) {
    planes[i].range = random_num(3400, 6000);
  }
  for (int i = 0; i < num_plane; i++) {
    printf("%d\n", planes[i].range);
  }
  return 0;
}
