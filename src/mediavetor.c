#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    system("clear");
    int valores[5]={15,0,6,50,18};
    int i;
    
    float soma;
    for ( i = 0; i < 5; i++)
    {
       soma=soma+valores[i]/5.0;
    }
    printf("O resultado da media é %.1f\n", soma);

    return 0;
}