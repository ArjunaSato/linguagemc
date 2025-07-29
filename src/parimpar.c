#include <stdio.h>
int main()
{
int numero;
printf("digite um número e tecle enter:\n");
scanf("%d", &numero);
if (numero % 2 == 0)
{
    printf("o número %d é par\n",numero);
}
else
{
    printf("o numero %d é impar\n", numero);
}
return 0;


}