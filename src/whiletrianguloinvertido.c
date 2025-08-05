#include<stdio.h>
#include<stdlib.h>

int main()
{
    int coluna=1, linha=20;
    while (linha>=1)
    {
        while (coluna<=linha)
        {
            printf("*");
            coluna++;
        }
        coluna=1;
        printf("\n");
        linha --;
    }
    
return 0;

}