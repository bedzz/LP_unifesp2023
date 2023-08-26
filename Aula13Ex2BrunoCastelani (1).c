#include <stdio.h>

float avista (float Valor) {
  Valor = 0.9 * Valor;
  return Valor;
}
float menoscem (float Valor) {
  Valor = Valor/2;
  return Valor;
}
float parcelado (float Valor, int parcelas) {
  Valor = (Valor*(1+0.03*parcelas))/parcelas;
  return Valor;
}


int main(void) {
  float Valor;
  int parcelas = 11, val = 10;
  
  printf("valor gasto: ");
  scanf(" %f", &Valor);
  
  if (Valor < 100)
    val = 2;
  
  while (parcelas > val) {
    printf("número de parcelas : ");
    scanf(" %d", &parcelas);
     if ((parcelas > val)&&(parcelas != 11))
      printf("Maior que o permitido, maximos de parcelas = %d)! ", val);
  }

  if (parcelas == 1)
    Valor = avista(Valor);
  else if (parcelas == 2)
    Valor = menoscem(Valor);
  else if ((parcelas > 2)&&(parcelas <= 10))
    Valor = parcelado(Valor, parcelas);

  printf("pagamento final: %dx de R$ %.2f", parcelas, Valor);

  
  return 0;
}


