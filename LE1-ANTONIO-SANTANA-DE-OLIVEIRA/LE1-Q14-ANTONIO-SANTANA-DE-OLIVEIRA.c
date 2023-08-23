/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q14 (Calcula um determinado somatório, e imprime os termos e o total)
Programação 1
02/06/2022
*/

#include <stdio.h>

int main(){

int n,i;
float soma=0,tmp1,tmp2;
scanf("%d",&n);

for (i=1;i<=n;i++){ //Loop para print dos termos somados e obtenção do valor da soma
    printf("%d/%d ",((i*i)+1),(i+3)); //Print dos termos em forma de fração
    tmp1 = (i*i)+1; //Atribução de valores para as variáveis temporarias float
    tmp2 = (i+3);
    soma += (tmp1/tmp2); //Cálculo da soma
}

printf("\n%f\n",soma);

return 0;

}
