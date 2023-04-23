#include <stdio.h>

int main() {
  int math[3][3];

  math[0][0] = 1;
  math[0][1] = 2;
  math[0][2] = 3;

  math[1][0] = 4;
  math[1][1] = 5;
  math[1][2] = 6;

  math[2][0] = 7;
  math[2][1] = 8;
  math[2][2] = 9;

  printf("Exibindo a primeira linha:\n");
  printf("%d %d %d\n", math[0][0], math[0][1], math[0][2]);

  printf("Exibindo a segunda linha:\n");
  printf("%d %d %d\n", math[1][0], math[1][1], math[1][2]);

  printf("Exibindo a terceira linha:\n");
  printf("%d %d %d\n", math[2][0], math[2][1], math[2][2]);
}