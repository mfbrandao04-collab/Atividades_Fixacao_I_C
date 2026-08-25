#include <stdio.h>

int main() {
    float valorCompra, percentualDesconto, valorDesconto, valorFinal;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra >= 500) {
        percentualDesconto = 15;
        valorDesconto = valorCompra * 0.15;
    } else {
        percentualDesconto = 5;
        valorDesconto = valorCompra * 0.05;
    }

    valorFinal = valorCompra - valorDesconto;

    printf("\n--- COMPRA ---\n");
    printf("Valor original: R$ %.2f\n", valorCompra);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final da compra: R$ %.2f\n", valorFinal);

    return 0;
}
