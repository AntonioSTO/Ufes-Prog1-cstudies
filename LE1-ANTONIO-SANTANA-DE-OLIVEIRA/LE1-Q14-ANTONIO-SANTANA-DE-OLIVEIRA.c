/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q14 (Calcula um determinado somat�rio, e imprime os termos e o total)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int main(){

int n,i;
float soma=0,tmp1,tmp2;
scanf("%d",&n);

for (i=1;i<=n;i++){ //Loop para print dos termos somados e obten��o do valor da soma
    printf("%d/%d ",((i*i)+1),(i+3)); //Print dos termos em forma de fra��o
    tmp1 = (i*i)+1; //Atribu��o de valores para as vari�veis temporarias float
    tmp2 = (i+3);
    soma += (tmp1/tmp2); //C�lculo da soma
}

printf("\n%f\n",soma);

return 0;

}
