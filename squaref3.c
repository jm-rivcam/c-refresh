#include <stdio.h>

float square(float);

int main(void) {
  float a = 0, c = 0;
  printf("please introduce the number to elevate to the square\n");
  scanf("%f", &a);
  printf("The result of suaring %.2f is %.2f\n", a, square(a));

  return 0;
}

float square (float ai )
{
    float ci=0;
    ci=ai*ai;
    return ci;

}
