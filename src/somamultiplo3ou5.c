#include<stdio.h>
#include<stdlib.h>

int main(){
int soma=0,i;
for( i = 0; i < 1000; i++)
{
    if (i%3==0 || i%5==0)
    {
        printf("%d+%d=",soma,i);
        soma=+i;
        printf("%d\n",soma);
    }
    
}
    printf("o resultado da soma é%d",soma);
return 0;
}