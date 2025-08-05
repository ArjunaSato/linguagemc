#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,num;
printf("Digite o número para a tabuada\n");
scanf("%d", &num);
for (i = 0; i < 10; i++)
{
    
    printf("%dx%d=%d\n", num,i,(num*i));    
}
return 0;


}