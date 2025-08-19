#include<stdio.h>
#include<stdlib.h>
/*
void: significa vazio e, é usado para funções que NÃO retornam valores. 
Elas possuem saída pré definida.
*/
void mensagem(){
    printf("Olá, seja bem vindo\n");
}
int soma(int x, int y){
    return x+y;
}
int main()
{
 mensagem();   
 printf("a soma de 5 e 4 é igual a %d\n", soma(5,4));
    return 0;
}
