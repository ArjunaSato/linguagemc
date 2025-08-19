#include<stdio.h>

void mensagem(){
    printf("olá, seja bem vindo!");

}
void separador(){
    int i;
    for(i=0; i<50;i++){
        printf("=");
    }
}
int precototal(int qtd, int preco){
    return qtd *preco;
}