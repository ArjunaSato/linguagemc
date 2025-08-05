#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");
    int linha=1,coluna=1;
    while (linha<=20)
    {
        while (coluna<=linha)
        {
                    
            printf("*");
            coluna++;
        }
        coluna=1;
        printf("\n");
        linha++;
        
    
    }
    return 0;
    
}