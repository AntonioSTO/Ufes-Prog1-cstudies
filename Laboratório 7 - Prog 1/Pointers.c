/*
Aluno: Antônio Sant'Ana de Oliveira
Código Ponteiros
01/07/2022
*/

#include <stdio.h>

int main(){

    int idade;
    int *ponteiro = &idade;

    printf("Insira sua idade:\n");
    scanf("%d",&idade);

    printf("O endereco de memoria da sua idade eh: %d\n",ponteiro);
    printf("Sua idade eh: %d",*ponteiro);

    return 0;

}
