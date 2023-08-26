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
    int j1,j2, result, cont= 0;
    
    srand(time(NULL));
    while ( cont<10){
        result = rand()%2;
        if(result==0){
            j1++;
        }else{
            j2++;
        }
        cont++;
    }
    if (j1>j2){
        printf("Apos uma partida intensa o vencedor foi o jogador 1, sendo o resultado %d caras e %d coroas",j1,j2);
    }else if(j2>j1){
        printf("Apos uma partida intensa o vencedor foi o jogador 2, sendo o resultado %d caras e %d coroas",j1,j2);
    }else{
        printf("Apos uma partida intensa o vencedor foi empate, sendo o resultado %d caras e %d coroas",j1,j2);
    }
        
    

    return 0;
}
