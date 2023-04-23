#include <stdio.h>

// Operadores de atribuição aritméticas:

int main() {
  int dado = 10;
  printf("Dado antes do incremento: %d.\n", dado);

  dado++;
  printf("Dado depois do incremento: %d.\n", dado);

  dado--;
  printf("Dado depois do decremento: %d.\n", dado);

  dado += 3;
  printf("Dado depois do incremento em três unidades: %d.\n", dado);

  dado -= 2;
  printf("Dado depois do decremento em duas unidades: %d.\n", dado);

  dado *= 10;
  printf("Dado depois de multiplicar por 10: %d.\n", dado);

  dado /= 10;
  printf("Dado depois de dividir por 10: %d.\n", dado);
}