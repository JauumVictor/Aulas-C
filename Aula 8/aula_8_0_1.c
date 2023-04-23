#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50
#define M 3

struct pessoa {
  int idade;
  float peso;
  char nome[N];
};

typedef struct pessoa pessoa;

int main() {
  setlocale(LC_ALL, "Portuguese");

  pessoa lista[M];
  int i;

  for (i = 0; i < M; i++) {
    printf("Insira os dados (%d):\n", i + 1);
    printf("Nome:\n");
    fgets(lista[i].nome, 49, stdin);
    fflush(stdin);

    printf("Idade:\n");
    scanf("%d", &lista[i].idade);
    fflush(stdin);

    printf("Peso:\n");
    scanf("%f", &lista[i].peso);
    fflush(stdin);
  }

  system("cls");

  printf("Dados:\n");
  for (i = 0; i < M; i++) {
    printf("Dados da pessoa %d:\n", i + 1);
    printf("Nome: %s\n", lista[i].nome);
    printf("Idade: %d\n", lista[i].idade);
    printf("Peso: %f\n\n", lista[i].peso);
  }
}