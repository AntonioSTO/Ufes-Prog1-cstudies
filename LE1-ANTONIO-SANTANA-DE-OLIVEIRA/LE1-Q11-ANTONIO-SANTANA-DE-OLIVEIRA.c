/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q11 (Calcula e retorna o n-�simo termo de uma PA (progress�o aritm�tica), sendo fornecidos como entrada o n�mero de termos, o primeiro termo e a raz�o)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int main(){

int A1,An,r,termos;

printf("Insira respectivamente o primeiro termo da PA, a razao e numero de termos:\n");

scanf("%d",&A1); //Leitura dos valores solicitados
scanf("%d",&r);
scanf("%d",&termos);

An = A1 + ((termos-1)*r); //C�lculo para obten��o do n-�simo termo da PA

printf("O n-esimo termo da PA eh igual a %d\n",An);

return 0;

}
