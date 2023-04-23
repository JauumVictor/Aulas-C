#include <stdio.h>

// Com vetores:

void print(int v[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
}

void print_1(int v[5]) {
  int i;
  for (i = 0; i < 5; i++) {
    printf("%d ", v[i]);
  }
}

void print_2(int *v, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
}

int main() {
  int vet[5] = { 1, 2, 3, 4, 5 };

  puts("Primeira impressão: ");
  print(vet, 5);

  puts("Segunda impressão: ");
  print_1(vet);

  puts("Terceira impressão: ");
  print_2(vet, 5);
}