#include <stdio.h>

int main(void) {
  int y = 0;
  int *yPtr;

  printf("this is the value of %d which is a variable\n", y);
  printf("this is the value of %d which is a pointer\n", *yPtr);
  yPtr = &y;
  printf("If we directionate the pointer *Yptr to the value of y, we have yPtr "
         "= &y or %d\n",
         *yPtr);

  return 0;
}
