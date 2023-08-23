/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q10 (Calcula o número mínimo de cédulas de cada tipo necessário para pagar uma dada quantia)
Programação 1
02/06/2022
*/

#include <stdio.h>

int main(){

int quantia; //Declaração das variáveis utilizadas
int n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
scanf("%d",&quantia);

n100 = quantia/100;    //Sequência de contas para decomposição da quantia em cédulas
quantia -= n100*100;
n50 = quantia/50;
quantia -= n50*50;
n20 = quantia/20;
quantia -= n20*20;
n10 = quantia/10;
quantia -= n10*10;
n5 = quantia/5;
quantia -= n5*5;
n2 = quantia/2;
quantia -= n2*2;
n1 = quantia/1;
quantia -= n1;

if (n100>0){printf("%d cedula(s) de 100\n",n100);}  //Sequência de condicionais para print exclusivo de valores não nulos
if (n50>0){printf("%d cedula(s) de 50\n",n50);}
if (n20>0){printf("%d cedula(s) de 20\n",n20);}
if (n10>0){printf("%d cedula(s) de 10\n",n10);}
if (n5>0){printf("%d cedula(s) de 5\n",n5);}
if (n2>0){printf("%d cedula(s) de 2\n",n2);}
if (n1>0){printf("%d cedula(s) de 1\n",n1);}

return 0;
}
