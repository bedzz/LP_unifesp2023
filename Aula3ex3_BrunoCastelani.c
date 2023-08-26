/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float P1, P2, T1, T2, T3, M3; 
    
    printf("P1: ");
    scanf("%f",&P1);
    printf("\nP2: ");
    scanf("%f",&P2);
    printf("\nT1: ");
    scanf("%f",&T1);
    printf("\nT2: ");
    scanf("%f",&T2);
    printf("\nT3: ");
    scanf("%f",&T3);
    printf("\nM3: ");
    scanf("%f",&M3);
    
    double M1 =(P1+P2)/2;
    double M2 =(T1+T2+T3)/3;
    double final = ((M1*6)+(M2*3)+M3)/10;

    printf("Nota FInal: %3.f",final);
    return 0;
}
