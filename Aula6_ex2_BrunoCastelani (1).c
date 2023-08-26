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
int main()
{
    int n, result, cont= 1;
     printf("Digite um numero: ");
     scanf("%d",&n);
    
    while ( cont<11){
        printf("%d X %d = %d\n",n,cont,n*cont);
        cont++;
    }
    
    

    return 0;
}
