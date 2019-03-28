#include <stdio.h>

int main(){
  int opc;
  printf(" 1ª LISTA DE Lab. de Programação\n\n");
  printf(" Menu de Questões\n");
  printf(" 1 - QUESTÃO 01\n 2 - QUESTÃO 02\n 3 - QUESTÃO 03\n 4 - QUESTÃO 04\n\n");
  printf(" Digite o numero correspondente a questão: ");
  scanf("%d",&opc);

//Questão 01

if (opc == 1){
printf("\n\tFaça um programa que receba o ano de nascimento de uma pessoa,calcule e mostre quantos anos essa pessoa terá em 2018.\n");

int AN;
int Idd;

printf("Digite seu ano de nascimento: ");
scanf("%d", &AN);
Idd=(2018-AN);
printf("\t\t******Resultado******\n");
printf("Sua idade em 2018 é: %d \n",Idd);
return 0;
 }

//Questão 02

if (opc == 2){
printf("\n\tFaça um programa que receba a quantidade de horas trabalhadas e o valor do salário mínimo. Calcule e mostre o valor a ser recebido sabendo que a hora trabalhada vale um quinto do salário mínimo.\n");

float HorasTrab;
float Salario;
float ValRec;
printf("Digite quantas horas você trabalhou: ");
scanf("%f", &HorasTrab);
printf("Digite o valor do salarion minimo vigente: ");
scanf("%f", &Salario);
ValRec= (Salario*0.2)*HorasTrab;
printf("\t\t******Resultado******\n");
printf(" O valor a ser recebido é: %.3f\n\n",ValRec);
return 0;
 }

//Questão 03

if(opc == 3){
printf("\n\tFaça um programa que receba uma temperatura em Celsius, converta e mostre essa temperatura em Fahrenheit.\n");

float f;
float c;
printf("Digite a a temperatura em Celsius: ");
scanf("%f",&c);
f=(1.8*c)+32;
printf("\t\t******Resultado******\n");
printf(" A temperatura em Fahrenheit é: %.2f \n\n",f);
return 0;
 }

//Quetão 04

if(opc == 4){
printf("\n\tSabe-se que para iluminar os cômodos de maneira correta, para cada m² , deve-se usar 18W de potência. Faça um programa que receba as duas dimensões de um cômodo(em metros), calcule e mostre a sua área (em m²) e a potência de iluminação que deverá ser utilizada.\n");

float m1;
float m2;
float Wt;
printf("Digite a primeira medida do local :  ");
scanf("%f",&m1);
printf("Digite a segunda medida do local :  ");
scanf("%f",&m2);
Wt=(m1*m2)*18;
printf("\t\t******Resultado******\n");
printf(" A quantidade de Watts é : %.2f \n\n",Wt);
return 0;
 }


if(opc >= 5){
printf("\n\n\t\t*** 	NÃO EXISTE QUETÃO CORRESPODENTE ***\n\n\t\tRode novamente o programa.\n\n");

 }


}
