#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int x = 2244;
  printf("%8.2f\n", x * 10 ^ -2);
  printf("%8d\n", x * 10 ^ -2);
  printf("%8e\n", x * 10 ^ -2);
  printf("%8g\n", x * 10 ^ -2);
  printf("%8x\n", x * 10 ^ -2);
  printf("%8.2f\n", x * pow(10, -2));
  printf("%8.2f\n", x * 1e-2);
  printf("%8.3e\n", x * .01);
  printf("%8.2f\n", x * 1. / 100);
  div_t dr = div(x, 100);
  printf("   %d.%d\n", dr.quot, dr.rem);
  
  return 0;
}
