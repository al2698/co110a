#include <stdio.h>
#include <stdbool.h>
#include<math.h>

#define dx 0.001

double height(double x) {
  return -((x-1.77)*(x-1.77));
}

#define dx 0.001

double df(double (*f)(double), double x) {
  return (f(x+dx)-f(x))/dx;
}

int main() {
  double d = df(sin, 3.1415947/2.0);
  printf("d=%f\n", d);
}
