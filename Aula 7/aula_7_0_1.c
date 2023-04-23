#include <stdio.h>

int main() {
  int math[3][3] = {{1, 2, 3}, {4, 5, 6}, {6, 7, 8}};
  int i, j;

  printf("Exibindo a primeira linha:\n");
  for (j = 0; j < 3; j++) {
    printf("%d \n", math[0][j]);
  }

  printf("Exibindo a segunda linha:\n");
  for (j = 0; j < 3; j++) {
    printf("%d \n", math[1][j]);
  }

  printf("Exibindo a terceira linha:\n");
  for (j = 0; j < 3; j++) {
    printf("%d \n", math[2][j]);
  }

  printf("Exibindo a matrix por completo:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d \n", math[i][j]);
    }
  }
}