#include <stdio.h>
    int main(){
    float temperatura;
    
        printf("Digite a temperatura atual: \n");
        scanf("%f", &temperatura); 

        if (temperatura < 15) { 
            printf ("A temperatura esta baixa.\n");
        } else { 
            printf ("A temperatura esta normal ou elevada. \n");
        }
        return 0;
    }
    