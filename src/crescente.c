#include<stdio.h>
#include<stdlib.h>

//1) Faça um programa que leia um número inteiro positivo N e imprima todos os
//números naturais de 0 até N em ordem crescente.
int main(){
    int N=99,vai;

    for ( vai = 0; vai <= N; vai++)
    {
        printf("[%d]-", vai);
    }
    system("pause");
return 0;


}