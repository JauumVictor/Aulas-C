#include <stdio.h>

float maior(float num1, float num2); // Protótipo de função;

int main() {
  float x, y;

  printf("Insira um valor:\n");
  scanf("%f", &x);

  printf("Insira outro valor:\n");
  scanf("%f", &y);

  printf("O maior valor: %.1f", maior(x, y));
}

float maior(float num1, float num2) { // Função em si.
  if (num1 > num2) {
    return num1;
  } else {
    return num2;
  }
}