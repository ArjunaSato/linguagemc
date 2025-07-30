#include<stdio.h>
int main()
{
int opcao;
printf("Selecione uma opção:\n");
printf("1.Ver Saldo\n");
printf("2.Fazer saque\n");
printf("3.Fazer Depósito\n");
printf("4.Sair\n");
printf("Digite a opção: ");
scanf("%d", &opcao);

if(opcao==1)
{
    
    printf("Ver Saldo\n");
}
else if(opcao==2)
{
    printf("Fazer Saque\n");
}
else if(opcao==3)
{
    printf("Fazer Depósito\n");
}
else if(opcao==4)
{
    printf("Saindo do programa. Até mais\n");
}
else{
    printf("Opção inválida. Por favor, escolha um número entre 1 e 4.\n");

}
return 0;



}