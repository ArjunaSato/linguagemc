/*Este programa pede dois números e com eles realiza as quatro operações matemáticas*/
#include<stdio.h>

int main()
{
float numero1, numero2;
float soma, subtrair, dividir, multiplicar;


printf("Digite um número e tecle um enter\n");
scanf("%f",  &numero1);

printf("Digite outro numero e tecle enter\n");
scanf("%f", &numero2);

soma=numero1+numero2;
subtrair=numero1 - numero2;
dividir=numero1 / numero2;
multiplicar=numero1*numero2;
printf("O resultado da soma é %.1f\n", soma);
printf("O resultado da subtração é %.1f\n", subtrair);
printf("O resultado da multiplicação é %.1f\n", multiplicar);
printf("O resultado da divisão é %.1f\n", dividir);

return 0;


}