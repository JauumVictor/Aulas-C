#include <stdio.h>

int main() {
  int v[5] = {10, 20, 30, 40, 50};
  int i;
  float m = 0;

  for (i = 0; i < 5; i++) {
    m += v[i];
  }

  printf("Resultado: %f\n", m / 5);
}
