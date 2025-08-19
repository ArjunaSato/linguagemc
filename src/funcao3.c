#include<stdio.h>
#include<stdlib.h>
#include"../lib/funcao3.h"

int main(){

    cabecalho();
    printf("\n");
    
    int p=potencia(2,4);
    printf("O resultado da potêcia é %d\n",p);
 
    float juros = jurosSimples(500.00,6.0);
    printf("O resultado de juros é %.1f\n",juros);

    separador();

    return 0;
}
