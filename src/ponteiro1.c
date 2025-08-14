#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor=10;
    int *pvalor=&valor;
    printf("O valor de %d\n",valor);
    printf("O valor de %p\n",pvalor);
    printf("==========================================\n");
    printf("o número da variável valor é %d\n",valor);
    printf("O endereço da variável é %p\n",&valor);
    printf("o número contido no ponteiro é %d\n",*pvalor);
    printf("O endereço quardado no ponteiro é %p\n",pvalor);
    return 0;
}