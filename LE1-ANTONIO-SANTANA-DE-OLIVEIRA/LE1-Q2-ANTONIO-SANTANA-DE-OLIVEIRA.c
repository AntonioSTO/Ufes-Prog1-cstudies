/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q2 (Programa que l� n n�meros do teclado e imprime o maior deles)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int main(){

int input, input_loop;
int max = 0;


scanf("%d",&input);

while (input>0){
    if (input>max) max = input;
    scanf("%d",&input_loop);
    input = input_loop;
}

printf("%d\n",max);

return 0;

}
