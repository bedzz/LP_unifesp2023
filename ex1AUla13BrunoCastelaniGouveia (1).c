#include <stdio.h>

int qtdade (int N, int X, int V[]) {
  int cont = 0, i = 0;

  do {
    if (V[i] == X)
      cont++;
  } while (++i < N);

  return cont;
}
int main(void) {
  int N, X;
  
  printf("tamanho? (N)");
  scanf(" %d", &N);
  printf("valor que deseja ver a qtd? ");
  scanf(" %d", &X);

  int V[N];
  for (int i = 0; i < N;i++){
    printf("Valor %d = ", i);
    scanf(" %d", &V[i]);
  }
   
  printf(" %d aparece %dx", X,qtdade(N, X, V));
    
  return 0;
}

