#include <stdio.h>

int main(){
  int opc;
  printf(" 2ª LISTA DE Lab. de Programação\n\n");
  printf(" Menu de Questões\n");
  printf(" 1 - QUESTÃO 01\n 2 - QUESTÃO 02\n 3 - QUESTÃO 03\n 4 - QUESTÃO 04\n\n");
  printf(" Digite o numero correspondente a questão:");
  scanf("%d",&opc);


// QUESTÃO 01
if(opc == 1){
printf("\n\tFaça um programa que receba a idade do nadador e informe a categoria de acordo com a divisão abaixo. Caso a idade informada não pertença a nenhuma categoria, avisar que a idade informada não possui categoria.\n");
int idade;
printf("digite a idade do nadado:  ");
scanf("%d",&idade);
    if (idade>=0 && idade <=4){
     printf("%d idade para não existe categoria\n",idade);
	}
	if (idade>=5 && idade <=7){
	 printf("%d idade para a categoria infantil\n",idade);
	}
	if (idade>=8 && idade <=10){
	 printf("%d idade para a categoria juvenil\n",idade);
	}
	if (idade>=11 && idade <=17){
	 printf("%d idade para a categoria adolecente\n",idade);
	}
	if (idade>=18 && idade <=29){
	 printf("%d idade para a categoria adulto\n",idade);
	}
	if (idade>=30 && idade <=100){
	 printf("%d idade para a categoria senior\n",idade);

	}
 }


// QUESTÃO 02

if (opc == 2){
printf("\n\tFaça um programa que receba a idade e o peso da pessoa. De acordo com a tabela abaixo, informar o grupo de risco que essa pessoa se encaixa.\n");

int idade;
float peso;
printf("digite a idade :");
scanf("%d",&idade);
printf("digite o peso:  ");
scanf("%f",&peso);

if (idade>=0 && idade <=20){
	if (peso>=0 && peso<=60)
	 printf("grupo de risco 9\n");
	if(peso>=60.1 && peso<=90 )
	 printf("Grupo de risco 8\n");
	if(peso>=91)
	 printf("Grupo de risco 7\n" );
}
if (idade>=21 && idade<=50){
	if (peso>=0 && peso<=60)
	 printf("Grupo de risco 6\n");
	if (peso>=60.1 && peso<=90)
	 printf("Grupo de risco 5\n");
	if (peso>=91)
	 printf("Grupo de risco 4\n");
}
if(idade>=51){
	if(peso>=0 && peso <=60)
	 printf("Grupo de risco 3\n");
	if (peso>=60.1 && peso<=90)
	 printf("Grupo de risco 2\n");
	if(peso>=91)
	 printf("Grupo de risco 1\n");
}
 }



//QUESTÃO 03
if (opc == 3){
printf("\n\tUma agência bancaria possui dois tipos de investimento, conforme informado abaixo. Faça um programa que receba o tipo do investimento e o valor do investimento, calcule o mostre o valor corrigido de acordo com o tipo de investimento.\n");

int TipInv;
float ValInv1;
float ValInv2;
float ValInv3;
float rend1;
float rend2;
float rend3;

printf(" invetimentos:\n 1- Poupança.\n 2-Renda Fixa.\n 3-Renda Variavel\n Digite o numero correspodente: ");
scanf("%d",&TipInv);
if(TipInv==1){
 printf("Digite o valor a ser investido:");
 scanf("%f",&ValInv1);
 rend1=(ValInv1*0,01);
 printf("\n**** Processando***\n\n");
 printf("o redimento é %f\n",rend1);
}
if(TipInv==2){
 printf("Digite o valor a ser investido:");
 scanf("%f",&ValInv2);
 rend2=(ValInv2*0,02);
 printf("\n**** Processando***\n\n");
 printf("o redimento é %f\n",rend2);
}
if(TipInv==3){
 printf("Digite o valor a ser investido:");
 scanf("%f",&ValInv3);
 rend3=(ValInv3*0,01);
 printf("\n**** Processando***\n\n");
 printf("o redimento é %f\n",rend3);
}
if(TipInv>3){
printf("\n\n OPÇÃO INVALIDA. \n\n");
}
 }



// QUESTÃO 04

if(opc == 4){
printf("\n\tFaça um programa que mostre o menu de opções a seguir, receba a opção do usuário, execute e mostre o resultado da opção escolhida.\n");

int menu;
printf(" Opções:\n 1- Multiplicar dois numeros.\n 2-Somar dois numeros.\n 3-Raiz quadrada de um numero.\n Digite o numero correspodente: ");
scanf("%d",&menu);
if(menu==1){
 float mult1;
 float mult2;
 float mult;
 printf("Digite os numeros a serem multiplicados: ");
 scanf("%f",&mult1);
 scanf("%f",&mult2);
 mult=(mult1*mult2);
 printf("\n**** Calculando***\n\n");
 printf("o resultado é %f\n",mult);
 }
 if(menu==2){
 float parc1;
 float parc2;
 float soma;
 printf("Digite os numeros a serem somados: ");
 scanf("%f",&parc1);
 scanf("%f",&parc2);
 soma=(parc1+parc2);
 printf("\n**** Calculando***\n\n");
 printf("o resultado é %f\n",soma);
}

if(menu==3){
 float num;
 float raiz;
 printf("Digite o numero para calcular a raiz quadrada: ");
 scanf("%f",&num);
 raiz=(num*0.5);
 printf("\n**** Processando***\n\n");
 printf("O resultado é %f\n",raiz);
}
if(menu>3){
printf("\n\n OPÇÃO INVALIDA. \n\n");
}

return 0;
 }


if(opc >= 5){
printf("\n\n\t\t*** 	NÃO EXISTE QUETÃO CORRESPODENTE ***\n\n\t\tRode novamente o programa.\n\n");

 }
}
