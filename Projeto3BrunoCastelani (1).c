#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
long int telefone;
char nome[30];
char endereco[4][50];
}Clientes;

typedef struct{
int codigo;
char nome[40];
float valor;
char descricao[100];
}Pizzas;

typedef struct{
int nPedido,codPizza, codEntregador,situacao,avaliacao;
long int telefoneCliente;
}Pedido;

Pedido pedido[100];
Clientes cliente[100];
Pizzas pizzas[100];
int entregadores[15],vendidas;
float fatura;
int qtdpizza =0, qtdcliente=0,qtdpedido=0;

//1
void cadastrarPizza(){
  int num = qtdpizza;
  getchar();
  pizzas[num].codigo = num+1;
  printf("\nNome da Pizza: "),fgets(pizzas[num].nome, 30, stdin);
  printf("\nDescricao da Pizza: "),fgets(pizzas[num].descricao, 100, stdin);
  printf("\nValor da Pizza: "),scanf("%f",&pizzas[num].valor);
  qtdpizza++;
getchar();
}
//2
void alterarPizza(){
  if(qtdpizza<1){
    printf("\nSem pizzas para serem alteradas"),getchar();
  }else{
    int e,esc=1, num;
 char nome[40];
   
  getchar();
 
  printf("\nBuscar pelo nome -1\nBuscar pelo codigo -2\n-->: "), scanf("%d",&e);
  
  switch (e){
    case 1:
      getchar();
        printf("\nDigite o nome da pizza: "),fgets(nome, 40, stdin);
    for (int i = 0; i<qtdpizza;i++){
      if(strcmp(pizzas[i].nome, nome)==0){
         num = i;
      }
    }
   
    break;
    case 2:
   printf("\nDigite o codigo da pizza: "),scanf("%d",&num);

      num--;   
    break;
  }
  
  while(esc!=0){
     printf("\nDeseja alterar qual dado da pizza %d?  0 para cancelar - 1 nome - 2 descricao - 3 valor: ",num+1),scanf("%d",&esc);
    getchar();
    switch(esc){
      case 1:
        printf("\nDigite o novo nome : "),fgets(pizzas[num].nome, 30, stdin);
      break;

      case 2:
        printf("\nDigite a nova descricao: "),fgets(pizzas[num].descricao, 100, stdin);
      break;

      case 3:
         printf("\nDigite o novo valor: "),scanf("%f",&pizzas[num].valor);
      break;
    }
     
  }
  }
 
     
}
//3
void removerPizza(){
  if(qtdpizza<1){
    printf("\nSem pizzas para serem removidas"),getchar();
  }else{
    int num;
  printf("\nDigite o Codigo da pizza: "),scanf("%d",&num);
  num--;
  for(int i = num; i<qtdpizza;i++){
      if(i+1==100){
         strcpy(pizzas[i].descricao, "");
          strcpy(pizzas[i].nome, "");
          pizzas[i].valor=0.0;
      }else{
        pizzas[i]= pizzas[i+1];
        pizzas[i].codigo=i+1;
      }
    
  }  
  qtdpizza--;
  }
  
  
}
//4
void despachoPizza(){
  
int d,k=0;
  for (int i = 0; i<qtdpedido;i++){
   if(pedido[i].situacao==1){
      printf("\nN do pedido: %d",pedido[i].nPedido);
      printf(" -Pendente");
      k++;
    }
      
  }
  if(k==0){
    printf("\nSem pedidos pendentes"),getchar();
  }else{
     printf("\nDigite o numero do pedido despachado: "), scanf("%d",&d);
  pedido[d-1].situacao = 2;
  printf("\nDigite o numero do entregador (1-15): "), scanf("%d",&d);
  entregadores[d-1]++;
  pedido[d-1].codEntregador = d;
  
  }
 getchar();
  
}
//5
void exibirEntregadores(){
  for (int i = 0; i<15;i++){
    printf("\nEntregador %d, %d entregas",i+1,entregadores[i]);
  }
  getchar();
}
//6
void exibirMontante(){
  printf("\nTotal de pizzas vendidas: %d",vendidas);
  printf("\nTotal de fatura: R$%.2f",fatura),getchar();
}

//1c
void cadastrarCliente(){
  int num= qtdcliente;
  printf("\nDigite o numero de telefone(apenas numeros): "),scanf("%ld",&cliente[num].telefone);
  getchar();
  printf("\nDigite o nome: "),fgets(cliente[num].nome, 40, stdin);
  printf("\nRua: "),fgets(cliente[num].endereco[0], 50, stdin);
  printf("\nNumero: "), fgets(cliente[num].endereco[1], 50, stdin);
  printf("\nBairro: "),fgets(cliente[num].endereco[2], 50, stdin);
  printf("\nCidade: "),fgets(cliente[num].endereco[3], 50, stdin);
qtdcliente++;
}
//2c
void alterarCliente(){
  if(qtdcliente<1){
    printf("\nSem clientes para alterar"),getchar();
  }else{
     int num,e;
  long int tel;
  char nome[30];

   printf("\nBuscar pelo nome -1\nBuscar pelo numero -2\n-->: "), scanf("%d",&e);
  
  switch (e){
    case 1:
      getchar();
      printf("\nDigite o nome: "),fgets(nome, 30, stdin);
        for (int i = 0; i<100;i++){
      if(strcmp(cliente[i].nome, nome)==0){
        i = 100;
        num = i;
      }
    }
    break;

    case 2:
          printf("\nDigite o numero: "),scanf("%ld",&tel);
        for (int i = 0; i<100;i++){
          if(cliente[i].telefone ==tel){
        i = 100;
        num = i;
      }
    }
    break;
  }
  
 
  int esc=1, esc2=1;
  while(esc!=0){
     printf("\nDeseja alterar qual dado do cliente?  0 para cancelar - 1 nome - 2 telefone - 3 endereco "),scanf("%d",&esc);
    getchar();
    switch(esc){
      case 1:
        printf("\nDigite o novo nome: "),fgets(cliente[num].nome, 40, stdin);
      break;

      case 2:
        printf("\nDigite o novo telefone (apenas numeros): "),scanf("%ld",&cliente[num].telefone);
      break;

      case 3:
        
        while (esc2 !=0){
          printf("\nDeseja alterar parte do endereco?  0 para cancelar - 1 rua - 2 bairro - 3 cidade - 4 tudo: "),scanf("%d",&esc2);
          getchar();
          switch(esc2){
            case 1:
               printf("\nRua: "),fgets(cliente[num].endereco[0], 50, stdin);
               printf("\nNumero: "), fgets(cliente[num].endereco[1], 50, stdin);
            break;

            case 2:
              printf("\nBairro: "),fgets(cliente[num].endereco[2], 50, stdin);
            break;

            case 3:
              printf("\nCidade: "),fgets(cliente[num].endereco[3], 50, stdin);
            break;

            case 4:
              
              printf("\nRua: "),fgets(cliente[num].endereco[0], 50, stdin);
              printf("\nNumero: "), fgets(cliente[num].endereco[1], 50, stdin);
              printf("\nBairro: "),fgets(cliente[num].endereco[2], 50, stdin);
              printf("\nCidade: "),fgets(cliente[num].endereco[3], 50, stdin);
            break;
          }
        }
        
         
        
      break;
    }
     
  }
 
  }
 
}
//3c
void removerCliente(){
  if(qtdcliente<1)
    printf("\nNao ha clientes para serem removidos"),getchar();
  else{
  int num,e;
  long int tel;
  char nome[30];
   printf("\nBuscar pelo nome -1\nBuscar pelo numero -2\n-->: "), scanf("%d",&e);
  
  switch (e){
    case 1:
      getchar();
      printf("\nDigite o nome: "),fgets(nome, 30, stdin);
        for (int i = 0; i<qtdcliente;i++){
      if(strcmp(cliente[i].nome, nome)==0){
        num = i;
      }
    }
    break;

    case 2:
          printf("\nDigite o numero: "),scanf("%ld",&tel);
        for (int i = 0; i<qtdcliente;i++){
          if(cliente[i].telefone ==tel){
        num = i;
      }
    }
    break;
  }
  
  for(int i = num; i<qtdcliente-1;i++){     strcpy(cliente[i].endereco[0],cliente[i+1].endereco[0]);
        strcpy(cliente[i].endereco[1],cliente[i+1].endereco[1]);
        strcpy(cliente[i].endereco[2],cliente[i+1].endereco[2]);
        strcpy(cliente[i].endereco[3],cliente[i+1].endereco[3]);
        strcpy(cliente[i].nome, cliente[i+1].nome);
        cliente[i].telefone=cliente[i+1].telefone;
       
      
    }
qtdcliente--;
    getchar();
  }
  
}
//4c
void menuPizza(){
  printf("\nPizzas:");
  for (int i = 0; i<qtdpizza;i++){
   
      printf("\nCodigo - %d",pizzas[i].codigo);
      printf("\n%s",pizzas[i].nome);
printf("\nValor: R$%.2f", pizzas[i].valor);
printf("\nDescricao: %s",pizzas[i].descricao);
    
  }
  getchar();
}
//5c
void pedidoPizza(){
  if (qtdcliente<1){
    printf("\nNao ha clientes no  sistema para o pedido ser feito"),getchar();
  }else{int num = qtdpedido;
  int  nc = -1, cp =0;
  long int tel;
  while(nc == -1){
     printf("\nDigite o numero de telefone do cliente: "), scanf("%ld",&tel);
  for (int i = 0; i< qtdcliente; i++){
    if (cliente[i].telefone==tel){
      nc = i,i = 100;
     
    }
      else if(cliente[i].telefone==0)
      i = 100;
  }
  }

  printf("\nDigite o codigo da pizza(ou 0 para ver o menu): "), scanf("%d",&cp);
  if(cp == 0){
    menuPizza();
    printf("\nDigite o codigo da pizza: "), scanf("%d",&cp);
  }

  pedido[num].nPedido = num+1;
  pedido[num].avaliacao = 0;
  pedido[num].codPizza =cp;
  pedido[num].telefoneCliente = tel;
  pedido[num].codEntregador = 0;
  pedido[num].situacao = 1;

  vendidas++;
  fatura+=pizzas[cp-1].valor;

  qtdpedido++;

  printf("\nNumero do seu pedido: %d",qtdpedido),getchar();}
  
}
//6c
void receberPedido(){
  if (qtdpedido<1){
    printf("\nNao ha pedidos cadastrados no sistema"),getchar();
  }else{
    int n,nota;
  printf("\nDigite o numero do pedido:"), scanf("%d",&n);
  if(pedido[n-1].situacao !=2){
    if (pedido[n-1].situacao ==1)
      printf("\nPizza ainda em preparo");
    if(n>qtdpedido)
      printf("\nPedido nao existente");
    if(pedido[n-1].situacao == 3)
      printf("\nPedido ja foi entregue");
  }else{
    pedido[n-1].situacao = 3;
  printf("\nDigite uma nota para o pedido (1-5)"),scanf("%d",&nota);
  pedido[n-1].avaliacao=nota;
  }
  
  }

  getchar();
}



int main(void) {
 
  int esc=1;
  while (esc!=0){
    system("clear");
    printf("\nDigite 0 para encerrar o sistema;\n");
    printf("Menu:\n");
    printf("1) Pizzaria\n");7
      
    printf("2) Cliente;\n");
    scanf("%d",&esc);
    
    switch(esc){
      case 1:
        printf("1) Cadastrar pizzas\n");
        printf("2) Alterar dados da pizza;\n");
        printf("3) Remover pizza;\n");
        printf("4) Despacho da pizza;\n");
        printf("5) Exibir entregador;\n");
        printf("6) Exibir montante;\n");
        printf("7) Sair;\n");
        printf("-->: "),scanf("%d",&esc);
        
        switch (esc){
          case 1:
          cadastrarPizza();
          break;
          
          case 2:
          alterarPizza();
          break;

          case 3:
          removerPizza();
          break;

          case 4:
          despachoPizza();
          break;

          case 5:
          exibirEntregadores();
          break;

          case 6:
          exibirMontante();
          break;

          case 7:
           getchar();
           break;
        }
      break;

      case 2:
        printf("1) Cadastrar cliente\n");
        printf("2) Alterar dados do cliente;\n");
        printf("3) Remover conta;\n");
        printf("4) Ver menu;\n");
        printf("5) Fazer pedido;\n");
        printf("6) Confirmar recebimento do pedido;\n");
        printf("7) Sair;\n");
        printf("-->: "),scanf("%d",&esc);

         switch (esc){
          case 1:
          cadastrarCliente();
          break;
          
          case 2:
          alterarCliente();
          break;

          case 3:
          removerCliente();
          break;

          case 4:
          menuPizza();
          break;

          case 5:
          pedidoPizza();
          break;

          case 6:
          receberPedido();
          break;

           case 7:
           getchar();
           break;
          
        }
      break;
    }
    

if(esc!=0){ printf("\n\nPressione enter para voltar ao menu"),getchar();}
   
  }

  return 0;
}