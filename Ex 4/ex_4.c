#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float s, p, a, ns;

    printf("Insira o salário inicial do funcionário:\n");
    scanf("%f", &s);

    printf("Insira o percentual de aumento deste funcionário:\n");
    scanf("%f", &p);

    // Calculando:

    a = (s * p / 100);
    ns = (s + a);

    // Exibindo resultados finais:
    printf("Valor do aumento: R$%.2f\n", a);
    printf("Novo salário com base no percentual de aumento: R$%.2f\n", ns);
}