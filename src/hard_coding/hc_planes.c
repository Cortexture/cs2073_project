#include "../structs.h"
#include "../helper_functions.h"

int hc_planes(void) {
  int num_plane = 50;
  Plane planes[num_plane];
  for (int i = 0; i < num_plane; i++) {
    planes.range[i] = random(3400, 6000);
    
  }
  return 0;
}
