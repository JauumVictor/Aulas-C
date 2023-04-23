#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int v[3];
  int p[3];
  int i = 0, n = 0, s = 0;

  for (i = 0; i < 3; i++) {
    printf("Insira a %d° nota:\n", i + 1);
    scanf("%d", &v[i]);
    n += v[i];
    fflush(stdin);

    printf("Insira o peso da %d° nota:\n", i + 1);
    scanf("%d", &p[i]);
    s += p[i];
    fflush(stdin);
  }

  printf("Média ponderada: %d\n", (n / 3));
}