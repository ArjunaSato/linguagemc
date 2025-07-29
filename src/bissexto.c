#include<stdio.h>

int main()
{
    int ano;
    printf("Digite um ano e tecle enter\n");
    scanf("%d", &ano);

    if (ano%4==0)
    {
        printf("esse ano é bissexto\n");
    }
    else
    {
        printf("não é bissexto\n");

    }
    return 0;

}