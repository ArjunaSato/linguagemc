#include<stdio.h>
#include<stdlib.h>

int main(){
//13) Faça um programa que exiba a soma de todos os números naturais abaixo de
//1.000 que são múltiplos de 3 ou 5.
int i,k,soma;
for ( i = 1; i < 305; i++)
{
   
    
   k=i*3;
    soma=+k;
    printf("|%d|equivalente á|%d|-->%d=(somando +3 abaixo)\n",i,k,soma);
 
}
    
return 0;

}