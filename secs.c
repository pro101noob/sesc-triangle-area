#include<stdio.h>
#include<math.h>

int main() {
  float a;
  scanf("%f", &a);
  printf("%.3lf", a*a*(sqrt(3))/4);
  return 0;
}
