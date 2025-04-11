#include <stdio.h>

int main() {
    float N1, N2, M;

    printf("Digite o primeiro número (N1): ");
    scanf("%f", &N1);

    printf("Digite o segundo número (N2): ");
    scanf("%f", &N2);

    M = (N1 + N2) / 2;

    printf("A média dos dois números é: %.2f\n", M);

    return 0;
}
