#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    system("clear");
    int valores[5]={15,0,6,50,18};
    int i;
    
    int soma;
    for ( i = 0; i < 5; i++)
    {
       soma+=valores[i];
    }
    printf("O resultado da soma é %d\n", soma);

    return 0;
}