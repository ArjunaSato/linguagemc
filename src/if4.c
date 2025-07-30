#include<stdio.h>
int main()
{
int numero;
printf("Digite um número:\n");
scanf("%d", &numero);
 if(numero>0){
 printf("O número %d é Positivo\n", numero);
}
else {
    printf(" O número %d é negativo ou zero\n", numero);
}
return 0;

}