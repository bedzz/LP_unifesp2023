#include<stdio.h>

int main(){
  int A[10], B[10], soma[10], sub[10];

  for (int i=0;i<10;i++){
    scanf("%d", &A[i]);
    scanf("%d", &B[i]);
    soma[i]= A[i] + B[i];
    sub[i]= A[i] - B[i];

    printf("soma: %d", soma[i]);
    printf("\nsubtracao: %d\n", sub[i]);
  }
  
}