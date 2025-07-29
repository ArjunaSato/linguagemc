#include<stdio.h>

int main()
{
    int idade;
    printf("Digite sua idade e aperte enter\n");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Não autorizado\n");
    }
    else
    {
        printf("Autorizado\n");
    }
    
return 0;

}