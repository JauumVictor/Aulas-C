#include <locale.h>
#include <stdio.h>
#include <string.h>

#define N 50

struct tipo_pessoa {
  int idade;
  float peso;
  char nome[N];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
  setlocale(LC_ALL, "Portuguese");

  // Criando e inicializando:
  tipo_pessoa pes = {0, 0.0, "Sem nome"};

  printf("Dados iniciais:\n");
  printf("Idade: %d\n", pes.idade);
  printf("Peso: %.2f\n", pes.peso);
  printf("Nome: %s\n\n", pes.nome);

  // Atribuindo valores aos campos com código:
  pes.idade = 10;
  pes.peso = 10.0;
  strcpy(pes.nome, "Dados modificados pelo código!");

  // Dados modificados via código:
  printf("Dados modificados via código:\n");
  printf("Idade: %d\n", pes.idade);
  printf("Peso: %.2f\n", pes.peso);
  printf("Nome: %s\n\n", pes.nome);

  // Atribuindo valores aos campos com teclado:
  printf("Digite a sua idade:\n");
  scanf("%d", &pes.idade);
  fflush(stdin);

  printf("Digite o seu peso:\n");
  scanf("%f", &pes.peso);
  fflush(stdin);

  printf("Digite o seu nome:\n");
  strcpy(pes.nome, fgets(pes.nome, 49, stdin));
  fflush(stdin);
  puts("\n");

  // Dados finais:
  printf("Dados modificados pelo usuário:\n");
  printf("Idade: %d\n", pes.idade);
  printf("Peso: %.2f\n", pes.peso);
  printf("Nome: %s\n\n", pes.nome);
}