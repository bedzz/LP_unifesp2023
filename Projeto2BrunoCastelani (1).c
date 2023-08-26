#include <stdio.h>
#include <stdlib.h>

void preencherbarco(int tamanho, int pil, int pic, int d, int c[10][10], int b) {
    int ver = 1;


    while (ver != 0 ) {
        ver = 0;
      
        while ((pic - 1 + tamanho > 10 && d == 2) || (pil - 1 + tamanho > 10 && d == 1)) {
            printf("\nPosicao invalida. Os barcos nao podem passar do tamanho do campo (10x10).\n");
            printf("Linha Inicial: ");
            scanf("%d", &pil);
            printf("Coluna Inicial: ");
            scanf("%d", &pic);
            printf("Direcao (1 - vertical, 2 - horizontal): ");
            scanf("%d", &d);
        }

        for (int i = 0; i < tamanho; i++) {
            if (d == 1) {
                if (c[pil + i - 1][pic - 1] != 0)
                    ver++;
            } else {
                if (c[pil - 1][pic + i - 1] != 0)
                    ver++;
            }
        }

     
        if (ver > 0 ) {
            printf("\nJa existe um navio nessa posicao. Escolha novamente.\n");
            printf("\nLinha Inicial: ");
            scanf("%d", &pil);
            printf("\nColuna Inicial: ");
            scanf("%d", &pic);
            printf("\nDirecao (1 - vertical, 2 - horizontal): ");
            scanf("%d", &d);
        }
    }

    for (int i = 0; i < tamanho; i++) {
        if (d == 1)
            c[pil + i - 1][pic - 1] = b;
        else
            c[pil - 1][pic + i - 1] = b;
    }
}
void Criarcampo(int c[10][10]){
  for (int i = 0; i<10; i++){
    for (int x = 0; x<10; x++){
      c[i][x] = 0;
  }
    printf("\n");
  }
}

void Exibircampo(int c[10][10]){
  
    printf("    1  2  3  4  5  6  7  8  9  10\n\n");
  for (int i = 0; i<10; i++){
    if(i+1==10)
      printf("%d  ", i+1);
    else
      printf("%d   ", i+1);
    for (int x = 0; x<10; x++){
    printf( "%d  ",c[i][x]);
  }
    printf("\n");
  }
}

int verificarAcerto(int c[10][10], int c2[10][10], int l, int co,int a ){
  if (c[l-1][co-1] != 0){
     c2[l-1][co-1] =  c[l-1][co-1];
    a++;
  }else{
     c2[l-1][co-1] = 7;
  }   
  return a;
  }

int main(void) {
  
  int campo[10][10],
  campo2[10][10],campojgada[10][10], campojgada2[10][10],l, c,dir, barcos[4], t , p, esc=0,jgada = 3, ac1,ac2;
  char navios[4][400]={"Porta-avioes","Navios-tanque","Contratorpedos","Submaniros"};

while(esc !=3){
  
  
   printf("1- Colocar Navios\n2-Comecar Jogo\n3-sair\n"), scanf("%d",&esc);
  
  switch(esc){
     case 1:
 system("clear");
    Criarcampo(campo);
 Criarcampo(campo2);
 Criarcampo(campojgada);
 Criarcampo(campojgada2);
    for(int j = 1; j<3;j++){
   printf("\nJogador %d:\n",j);
  t=4;
  for (int p = 1 ; p<=4;p++){
   
    
      for(int i = 0;i<p;i++){
        printf("\nEscolha a posicao do %s, %d restantes\n",navios[p-1],p-i);
        printf("\nLinha inicial: "), scanf("%d",&l);
        printf("\nColuna inicial: "), scanf("%d",&c);
        printf("\ndirecao (1 vertical), (2 horizontal)"), scanf("%d",&dir);
        
        if (j==1){
           preencherbarco(t, l, c,  dir, campo, p);
          Exibircampo(campo);
        }
       if (j==2){
          preencherbarco(t, l, c,  dir, campo2, p);
          Exibircampo(campo2);
        }
           
      }
    
    t--;
  }

}
    break;

    case 2:
      ac1 = 0, ac2 = 0, jgada = 3;
    while(jgada !=0){
    printf("\n\n\n\n\n\n");
     printf("\nTurno %d:\n",jgada-2);
    if(jgada%2!=0){
      printf("\nJogador 1: \n");
      Exibircampo(campojgada);
      printf("Digite a linha e coluna do seu ataque");
      printf("Linha: "), scanf("%d",&l);
      printf("Coluna: "), scanf("%d",&c);
      if (verificarAcerto(campo2, campojgada, l, c, ac1)>ac1){
         ac1 = verificarAcerto(campo2, campojgada, l, c, ac1);
        
      }else{
         jgada++;
      }
      
     
    }else{
      printf("\nJogador 2: \n"); 
      Exibircampo(campojgada2);

      printf("Digite a linha e coluna do seu ataque");
      printf("Linha: "), scanf("%d",&l);
      printf("Coluna: "), scanf("%d",&c);
      if (verificarAcerto(campo, campojgada2, l, c, ac2)>ac2){
        ac2 = verificarAcerto(campo, campojgada2, l, c, ac2);
        
      }else{
         jgada++;
      }
      
      

      
      
    }
   
    if (ac1 ==20 || ac2 ==20)
      jgada=0;
  }

  if(ac1 ==20){
    printf("Vitória Jogador 1\n");
  }else{
     printf("Vitória Jogador 2\n");
  }
    break;
  }
 
  
}
   
  return 0;
}