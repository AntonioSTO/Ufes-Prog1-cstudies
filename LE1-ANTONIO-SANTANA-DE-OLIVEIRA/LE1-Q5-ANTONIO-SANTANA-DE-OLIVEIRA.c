/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q5 (Programa que converte binário para decimal)
Programação 1
02/06/2022
*/

#include <stdio.h>
#include <string.h>

int main(){

int i;
int decimal = 0;
int indice = 1;
char num_bin[20];
scanf("%s",num_bin);

int len = strlen(num_bin);  //variável lenght da string

for(i=len-1;i>=0;i--){ //define i=len-1 (para retirar o \n da string) e subtrai 1 a cada loop

    decimal += indice*(num_bin[i]-'0'); //inicia a conversão para decimal da direita para a esquerda e converte para inteiro
    indice*=2;  //indice de conversão, incrementado *2 a cada loop

}

printf("%d",decimal);


return 0;

}
