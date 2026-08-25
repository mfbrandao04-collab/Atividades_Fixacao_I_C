#include <stdio.h>
    int main(){
    	int orcamentofinal;

        printf("Digite o valor do orcamento final: ");
        scanf("%d", &orcamentofinal);

        if(orcamentofinal >= 10000) {
            printf("Parabens! Voce fara uma viagem internacional.\n", orcamentofinal);
        } else {
            printf("Voce fara uma viagem nacional.\n", orcamentofinal);
        }
        return 0;
    }