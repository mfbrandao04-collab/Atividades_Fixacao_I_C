#include <stdio.h>
int main() {
    float valorconta, desconto, valorfinal;

    printf ("Digite o valor da conta: \n");
    scanf ("%f", &valorconta);

    if (valorconta >= 500 ) {
        desconto = valorconta * 0.15;
    } else {
        desconto = valorconta * 0.05;
    }

    valorfinal = valorconta - desconto; 

    printf("\n-----CUPOM FISCAL-----\n");
    printf("valor original: R$ %.2f\n", valorconta);
    printf("desconto: R$ %.2f\n", desconto);
    printf("valor final: R$ %.2f\n", valorfinal);

    return 0;
}