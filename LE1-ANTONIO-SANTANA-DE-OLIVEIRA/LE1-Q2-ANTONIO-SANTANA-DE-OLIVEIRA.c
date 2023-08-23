/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q2 (Programa que lê n números do teclado e imprime o maior deles)
Programação 1
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
