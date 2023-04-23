#include <stdio.h>

int main() {
  float m;

  printf("Insira a nota:\n");
  scanf("%f", &m);

  if (m >= 7.0) {
    printf("Aprovado(a) com nota %f", m);
  } else {
    printf("Reprovado(a) com nota %f", m);
  }
}
