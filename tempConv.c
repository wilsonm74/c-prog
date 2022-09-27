#include <stdio.h>

int main() {
  float fahr, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahrenheit to Celsius Conversion Table\n");
  printf("Fahrenheit | Celsius\n");

  fahr = lower;
  while (fahr <= upper) {
    cels = (5.0/9.0) * (fahr-32.0);
    printf("%10.0f | %7.1f\n", fahr, cels);
    fahr = fahr + step;
  }
  return 0;
}
