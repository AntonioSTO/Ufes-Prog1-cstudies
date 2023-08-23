/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q11 (Calcula e retorna o n-ésimo termo de uma PA (progressão aritmética), sendo fornecidos como entrada o número de termos, o primeiro termo e a razão)
Programação 1
02/06/2022
*/

#include <stdio.h>

int main(){

int A1,An,r,termos;

printf("Insira respectivamente o primeiro termo da PA, a razao e numero de termos:\n");

scanf("%d",&A1); //Leitura dos valores solicitados
scanf("%d",&r);
scanf("%d",&termos);

An = A1 + ((termos-1)*r); //Cálculo para obtenção do n-ésimo termo da PA

printf("O n-esimo termo da PA eh igual a %d\n",An);

return 0;

}
