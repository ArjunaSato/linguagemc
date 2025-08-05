#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int numero;
    printf("Digite o número e aperte enter\n");
    scanf("%d",&numero);
    for ( numero = 0; numero <=90; numero++)
    {
        if (numero%2==0)
        {
            printf("o número %d é par\n", numero);
        }
            printf("o número %d é impar\n",numero);
        
    }
    
    return 0;
}
