/******************************************************************************
11     Sao Paulo
   21     Rio de Janeiro
   32     Juiz de Fora
   19     Campinas
   27     Vitoria
   31     Belo Horizonte
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ddd;
    printf("DDD: ");
    scanf("%d",&ddd);
    
    switch(ddd){
        case 61:
         printf("Brasilia");
         break;
        case 71:
         printf("Salvador");
        break;
        case 11:
         printf("Sao Paulo");
        break;
        case 21:
         printf("Rio de Janeiro");
        break;
        case 32:
         printf("Juiz de Fora");
        break;
        case 19:
         printf("Campinas");
        break;
        case 27:
         printf("Vitoria");
        break;
        case 31:
         printf("Belo Horizonte");
        break;
        default:
         printf("DDD não cadastrado! ");
        break;
    }

    return 0;
}
