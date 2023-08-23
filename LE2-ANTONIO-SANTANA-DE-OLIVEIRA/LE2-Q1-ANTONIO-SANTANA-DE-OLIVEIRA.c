/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE2-Q1 (Preenche um vetor de 10 posições começando pelo valor inicial e incrementando-o com a razão
(progressão aritmética - PA). Depois verifica se o numero pedido pertence à PA e informa o resultado na tela.)
Programação 1
09/06/2022
*/

#include <stdio.h>
#include <string.h>

int main(){

int n1,r,num,i,bol;
int PA[10];

printf("Por favor, insira, respectivamente, o valor inicial da PA e sua razao:\n");
scanf("%d",&n1);
scanf("%d",&r);

for (i=0;i<10;i++){
    PA[i] = n1 + (i*r);

}

printf("Digite um valor a ser pesquisado:\n");
scanf("%d",&num);

printf("PA: ");

for(i=0;i<10;i++){
      printf("%d ", PA[i]);
}

for (i=0;i<10;i++){
    if (num==PA[i]){bol=1;break;}
    else {bol=0;}
}

if (bol==1){printf("\nValor %d se encontra na PA.",num);}
else {printf("\nValor %d nao se encontra na PA.",num);}

return 0;

}
