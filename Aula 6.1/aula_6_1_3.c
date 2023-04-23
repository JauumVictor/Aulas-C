#include <locale.h>
#include <stdio.h>
#include <string.h>

#define N 50

// Uso do strlen():
int main() {
  setlocale(LC_ALL, "Portuguese");
  char str[N];

  printf("Digite um texto:\n");
  gets(str);
  printf("Tamanho do texto digitado: %d\n\n", strlen(str));
  printf("Output:\n");

  puts(str);
}