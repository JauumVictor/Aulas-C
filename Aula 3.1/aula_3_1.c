#include <stdio.h>

// Operadores matemáticos:

int main() {
  int A, B, soma, subtr, mult, divis;

  printf("Digite o primeiro valor:\n");
  scanf("%d", &A);

  printf("Digite o segundo valor:\n");
  scanf("%d", &B);

  soma = A + B;
  subtr = A - B;
  mult = A * B;
  divis = A / B;

  printf("Resultados:\n");
  printf("Soma de %d + %d: %d.\n", A, B, soma);
  printf("Subtra. de %d - %d: %d.\n", A, B, subtr);
  printf("Multiplica. de %d * %d: %d.\n", A, B, mult);
  printf("Divis. de %d / %d: %d.\n", A, B, divis);
}