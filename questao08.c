#include <stdio.h>
int main() {
    int estoque;

    printf ("Digite a quantidade de produtos em estoque: \n");
    scanf ("%d", &estoque);

    if ( estoque < 10) {
        printf ("O estoque esta baixo. Necessario realizar reposicao. \n");
    }
    return 0;
}