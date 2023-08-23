/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q9 (Imprime uma tabela de convers�o de graus Celsius para Fahrenheit, dados o in�cio, o fim e o intervalo)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int main(){

float inicio,fim,intervalo,conversao;
printf("Insira respectivamente o inicio,fim e intervalo da sua convers�o:\n");

scanf("%f",&inicio); //Leitura dos valores solicitados
scanf("%f",&fim);
scanf("%f",&intervalo);

while (inicio<=fim){ //Loop para output da lista de convers�es

    conversao = ((9*inicio)/5) + 32;
    printf("%.2f C = %.2f F\n",inicio,conversao);
    inicio+=intervalo;   //Incremento do valor inicial com o valor intervalo at� seu valor final "fim"

}

return 0;

}
