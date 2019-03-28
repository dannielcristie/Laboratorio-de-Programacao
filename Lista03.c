#include <stdio.h>

int main(){

  int opc;
  printf(" 3ª LISTA DE Lab. de Programação\n\n");
  printf(" Menu de Questões\n");
  printf(" 1 - QUESTÃO 01\n 2 - QUESTÃO 02\n 3 - QUESTÃO 03\n 4 - QUESTÃO 04\n\n");
  printf(" Digite o numero correspondente a questão: ");
  scanf("%d",&opc);

//QUESTÃO 01
if (opc == 1){
printf("\n\tCrie um programa para apresentar os resultados de uma tabuada de um número informado pelo usuário.\n");

int tab = 0;
int x;
printf("Digite a tabuada que você deseja: ");
scanf("%d", &tab);
for( x = 1; x<=10; ++x){
printf("%dx%d = %d\n", x, tab, x * tab);
}
 }

//QUESTÃO 02
if (opc == 2){
printf("\n\t Escreva um programa que apresente a série de Fibonacci até o décimo quinto termo. A série de Fibonacci é formada pela seqüência: 1,1,2,3,5,8,13,21,34,... N. Essa série se caracteriza pela soma de um termo posterior com o seu anterior subseqüente.\n");

int a = 0, b = 1, aux, i, n;
printf("Série de Fibonacci ate o 15º é:\n");
printf("%d\n", b);
for(i = 0; i < 15; i++){
aux = a + b;
a = b;
b = aux;
printf("%d\n", aux);
}
 }


//QUESTÃO 03
if(opc == 3){
printf("\n\tElaborar um programa que apresente o valor de uma potência de uma base qualquer elevada a um expoente qualquer, ou seja, base expoente . (Obs: sem utilizar a função pow(), use estruturas de repetição para calcular.) \n");

int base,expo,aux;
printf("digite a base:");
scanf("%d",&base);
printf("digite o expoente:");
scanf("%d",&expo);
aux=base;
while (expo>1){
  aux=aux*base;
  expo--;
}
printf("%d\n",aux);
 }


//QUESTÃO 04
if (opc == 4){
printf("\n\t Elaborar um programa que efetue a leitura de valores positivos inteiros até que um valor negativo seja informado. Ao final devem ser apresentados o maior e o menor valores informados pelo usuário.\n");

int num,maior,menor,x;
printf("digite um numero: ");
scanf("%d",&num);
maior=num;
menor=num;
if (num>=0){
 for(x=0;x<=10;++x){
  printf("digite um numero: ");
  scanf("%d",&num);
  if (num>maior){
    maior=num;
  }
   if(num<=menor){
    menor=num;
  }
  
 if (num<0){
  printf("numero invalido");
}
 }
printf(" o maior é: %d\n", maior);
printf(" o menor é: %d\n", menor);

}
 }
 
 
if (opc >= 5){
 printf("\n\n\t\t\tErro!\n\n");

}
}
