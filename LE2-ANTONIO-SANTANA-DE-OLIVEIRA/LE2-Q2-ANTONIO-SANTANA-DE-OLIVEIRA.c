/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE2-Q2 (Lê n números inteiros positivos do teclado até que seja lido número zero. Para cada vez
que um novo número for lido, imprime o maior, o menor e a média dos números lidos até então.)
Programação 1
13/06/2022
*/

#include <stdio.h>
#include <string.h>

int main(){

int input, input_loop;
int max,min,soma,n;

scanf("%d",&input);
max = input;
min = input;
soma = 0;
n = 0;

while (input!=0){
    soma += input;
    n += 1;
    if (input>max){max = input;}
    if (input<min){min = input;}
    printf("O maior eh %d, o menor eh %d e a media eh %d\n",max,min,soma/n);
    scanf("%d",&input_loop);
    input = input_loop;
}


return 0;


}
