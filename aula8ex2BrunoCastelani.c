#include<stdio.h>

int main(){
  double sem[7],media, maior=0.0,menor=0.0;

  for (int i=0;i<7;i++){
    scanf("%lf", &sem[i]);
    media+=sem[i];
    menor = sem[i];
    
   
  }
  for (int i=0;i<7;i++){
    if (sem[i]> maior)
      maior = sem[i];
    if(sem[i]< menor)
      menor = sem[i];
   
  }
  media = media/7.0;
  printf("maior temp: %.2lf\n menor temp: %.2lf\n temp media: %.2lf ", maior,menor,media);
  
}