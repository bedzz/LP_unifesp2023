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
#include <math.h>

int main()
{
    float a,b,c;
    printf("Valor a: ");
    scanf("%f",&a);
    printf("Valor b: ");
    scanf("%f",&b);
    printf("Valor a: ");
    scanf("%F",&c);
    
    double delta = (b*b) -(4*a*c);
    
    double x1 = (-b+sqrt(delta))/(2*a), x2 = (-b-sqrt(delta))/(2*a);
    
    if(delta>0){
        printf("resposta de x é %.2f ou %.2f ",x1,x2);
    }else if(delta=0){
        printf("resposta de x é %.2f ",x1);
    }else{
        printf("não existe uma solucao no conjunto dos reais para x");
    }
    
    
    
    

    return 0;
}
