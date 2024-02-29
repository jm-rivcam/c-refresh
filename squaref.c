#include <stdio.h>

float square(float);

int main(void) {
  float a = 0, c = 0;
  printf("please introduce the number to elevate to the square\n");
  scanf("%f", &a);
  c=square(a);
  printf("The result of suaring %.2f is %.2f\n", a, c);

  return 0;
}

float square (float ai )
{
    return ai*ai;

}
