/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q5 (Programa que converte bin�rio para decimal)
Programa��o 1
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

int len = strlen(num_bin);  //vari�vel lenght da string

for(i=len-1;i>=0;i--){ //define i=len-1 (para retirar o \n da string) e subtrai 1 a cada loop

    decimal += indice*(num_bin[i]-'0'); //inicia a convers�o para decimal da direita para a esquerda e converte para inteiro
    indice*=2;  //indice de convers�o, incrementado *2 a cada loop

}

printf("%d",decimal);


return 0;

}
