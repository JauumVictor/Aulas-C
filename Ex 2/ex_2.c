#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i;
  float v[3];
  float s = 0.0;
  printf("Escreva 3 notas em sequência para calcular a média:\n");

  for (i = 0; i < 3; i++) {
    scanf("%f", &v[i]);
    s += v[i];
  }

  printf("A média aritmética entre as 3 notas enviadas é: %.0f\n", (s / 3));
}