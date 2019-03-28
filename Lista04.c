#include <stdio.h>

int main(){
  int opc;
  printf(" 4ª LISTA DE Lab. de Programação\n\n");
  printf(" Menu de Questões\n");
  printf(" 1 - QUESTÃO 01\n 2 - QUESTÃO 02\n 3 - QUESTÃO 03\n 4 - QUESTÃO 04\n\n");
  printf(" Digite o numero correspondente a questão:");
  scanf("%d",&opc);

//QUESTÃO 01

if(opc == 1){
printf(" Questão 01\n\n Digite um vetor e o obtenha em ordem inversa.\n\n");
printf(" Digite os elementos desse vetor:\n\n");
int vetor[10],x,j;
for(x=0;x<10;x++){
  printf(" Digite o elemento %d:",j+x);
  scanf("%d",&vetor[x]);
}
printf(" \n*** Imprimindo ***\n");
printf(" O vetor em ordem inversa é:\n");
for(x=10;x>=1;--x){
  printf("%d\n",vetor[x]);
}}

//QUESTÃO 02

if(opc==2){
printf(" Questão 02\n\n Calcular a Media de 10 alunos.\n\n");
printf(" Digite as notas do alunos:\n\n");
float vet[10], media;
int x;
for(x=0;x<10;x++){
  printf(" Digite a nota  do aluno %d: ",x+1);
  scanf("%f",&vet[x]);
media+=vet[x];
}
printf("%.2f",media/10);
}

//QUESTÃO 03

if(opc==3){
printf(" Questão 03\n\n Soma dos elementos acima da diagonal de uma matriz.\n\n");
printf(" Digite os elementos da matriz:\n\n");
int matrix[3][3],lin,col,somaci;
for(lin=0;lin<3;lin++){
  for(col=0;col<3;col++){
    printf(" Digite o elemento [%d][%d]",lin,col);
    scanf("%d",&matrix[lin][col]);
  }
}
somaci=(matrix[0][0]+matrix[0][1]+matrix[1][0]);
printf(" A soma dos elemetos acima da diagonal principal é : %d\n\n",somaci);
}

//QUESTÃO 04

if(opc==4){
printf(" Questão 04\n\n Potencia ao quadrado de uma matriz.\n\n");
printf(" Digite os elementos da matriz:\n\n");
  int i, j, k1, k2, m1[3][3], m2[3][3], m3[3][3], aux;
    // matriz M
    printf("\nValores da Matriz M\n");
    for (i=0; i<3; i++) {
      for(j=0; j<3; j++) {
        printf("Digite um valor para [%d][%d].: ", (i+1), (j+1));
        scanf("%d", &m1[i][j]);
      }
    }
    //duplicando a matriz M para multiplica por ela mesmo
    for (i=0; i<3; i++) {
      for (j=0; j<3; j++) {
        m2[i][j]=m1[i][j] ;
      }
    }//efutuando a multiplicação
    for (k1=0;k1<3; k1++) {
      for (k2=0; k2<3; k2++) {
        aux=0;
        for (i=0; i<3; i++) {
          aux=aux +(m1[k1][i] * m1[i][k2]); 
        }
        m3[k1][k2] = aux;    }
    }
    printf("\nMatriz N^2\n");
    for (i=0; i<3; i++) {
      for (j=0; j<3; j++) {
        printf("O elemento [%d][%d] = %d\n",i+1,j+1,m3[i][j]);
      }
    }
}
if(opc<=0||opc>=5){
printf(" \nNumero invalido.");

}
return 0;
}
