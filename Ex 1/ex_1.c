#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i, s = 0;
  int v[4];
  printf("Escreva 4 números inteiros em sequência:\n");

  for (i = 0; i < 4; i++) {
    scanf("%d", &v[i]);
    s += v[i];
  }

  printf("O resultado da soma dos 4 números é: %d\n", s);
}