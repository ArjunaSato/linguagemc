#include<stdio.h>
#include<stdlib.h>

int main(){

    int i;
    int soma=0;
    for(i=1; i<=50;i++){
        if (i%2==0)
        {
            soma+=i;
        }
        
    }
    printf("Resultado da soma é %d\n",soma);
    return 0;
}