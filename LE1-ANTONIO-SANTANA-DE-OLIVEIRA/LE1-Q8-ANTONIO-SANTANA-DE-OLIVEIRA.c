/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q8 (Converte valores de temperatura de Celsius para Fahrenheit)
Programação 1
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
