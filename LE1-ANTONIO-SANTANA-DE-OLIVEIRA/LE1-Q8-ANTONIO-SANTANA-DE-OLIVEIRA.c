/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q8 (Converte valores de temperatura de Celsius para Fahrenheit)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int main(){

float c,f;

printf("Insira a temperatura em Celsius:\n");
scanf("%f",&c);

f = ((9*c)/5) + 32;

printf("A temperatura convertida em Fahrenheit eh %f",f);

return 0;
}
