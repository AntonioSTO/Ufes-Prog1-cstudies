/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q9 (Imprime uma tabela de conversão de graus Celsius para Fahrenheit, dados o início, o fim e o intervalo)
Programação 1
02/06/2022
*/

#include <stdio.h>

int main(){

float inicio,fim,intervalo,conversao;
printf("Insira respectivamente o inicio,fim e intervalo da sua conversão:\n");

scanf("%f",&inicio); //Leitura dos valores solicitados
scanf("%f",&fim);
scanf("%f",&intervalo);

while (inicio<=fim){ //Loop para output da lista de conversões

    conversao = ((9*inicio)/5) + 32;
    printf("%.2f C = %.2f F\n",inicio,conversao);
    inicio+=intervalo;   //Incremento do valor inicial com o valor intervalo até seu valor final "fim"

}

return 0;

}
