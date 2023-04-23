#include <locale.h>
#include <stdio.h>
#include <string.h>

#define N 20

// Uso do strcpy():
int main() {
  setlocale(LC_ALL, "Portuguese");

  char origem[N] = {"Olá!, mundo!"};
  char destino[N]; // Memory junk

  printf("Antes do strcpy:\n");
  puts(origem);
  puts(destino);
  puts("");

  strcpy(destino, origem);

  printf("Depois do strcpy:\n");
  puts(origem);
  puts(destino);
  puts("");
}