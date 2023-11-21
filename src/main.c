#include <stdio.h>

void blah1() {
  printf("blah 1\n");
}

void blah2(void) {
  printf("blah 2\n");
}

int main() {
  blah1();
  blah2();
  blah1(2);
  blah2(2);
  return 0;
}
