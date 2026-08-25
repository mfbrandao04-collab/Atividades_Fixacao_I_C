#include <stdio.h>
int main() {
    
    float salariomensal, bonus, salarioreajustado;
    printf("Digite o valor do seu salario mensal: \n"); 
    scanf ("%f", &salariomensal); 

    if (salariomensal >= 3000) {
        bonus = salariomensal * 0.10;
    } else { 
        bonus = 0;
    }

    salarioreajustado = salariomensal + bonus;
    printf("\n-----SALARIOS-----\n");
    printf ("Salario original: R$ %.2f\n", salariomensal);
    printf ("valor do bonus: R$ %.2f\n", bonus);
    printf ("Salario reajustado: R$ %.2f\n", salarioreajustado);
    return 0;
}