/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int quantidadeDiv(int n,int maior){
    int resultado = 0;
    if (n>=maior){
        resultado = n/maior;
        
    }
    return resultado;
}
int resto(int n,int maior){
    if (n> 0){
        return n%maior;
    }else {
        return 0;
    }
}

int main()
{
    double i,f=1.00;
    int t,tempo[3],rest[1];
    
    printf("massa inicial: ");
    scanf("%lf",&i);
    f = i/2.00;
    t+=30;
    while(f>=1){
        f=f/2.00;
        t+=30;
    }
  
    
    tempo[0] = quantidadeDiv(t,3600);
 
    rest[0]= resto(t,3600);
    tempo[1]= quantidadeDiv(rest[0],60);
    rest[1]=resto(rest[0],60);
    tempo[2]= rest[1];
    
    printf("massa inicial = %.2f ,  massa final = %.2f , tempo = %d:%d:%d",i,f,tempo[0],tempo[1],tempo[2]);

    return 0;
}
