#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int valor;
    int qtd=0;
    int i;
    int vetor[qtd];
        printf("Digite outro valor\n");
        scanf("%d", &valor);
    while (valor!=99){
        vetor[qtd]=valor;
        qtd++;
        printf("Digite outro valor\n");
        scanf("%d", &valor);
    }
    printf("\n =====================Valores digitados pelos usuários===================\n");
    for (i = 0; i < qtd; i++)
    {
        printf("%d\n",vetor[i]);ad
    }
    printf("\n");

    return 0;
}
