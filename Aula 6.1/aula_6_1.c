#include <stdio.h>
#define i 10

int main() {
  char s[i];

  printf("Digite algo (scanf convencional):\n");
  scanf("%s", s);
  fflush(stdin);

  printf("Resultado: %s\n\n", s);

  printf("Digite algo (scanf aprimorado):\n");
  scanf("%9[^\n]s", s);
  fflush(stdin);

  puts("Resultado:");
  puts(s);
  puts("");

  printf("Digite algo (gets):\n");
  gets(s);
  fflush(stdin);

  puts("Resultado:");
  puts(s);
  puts("");

  printf("Digite algo (fgets):\n");
  fgets(s, 10, stdin);
  fflush(stdin);

  puts("Resultado:");
  puts(s);
  puts("");
}