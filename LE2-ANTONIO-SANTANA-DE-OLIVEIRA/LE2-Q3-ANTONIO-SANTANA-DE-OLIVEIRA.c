/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE2-Q3 (Lê uma string do teclado (tamanho máximo 50) e imprime cada caracter de trás pra frente.)
Programação 1
13/06/2022
*/

#include <stdio.h>
#include <string.h>

int main(){

int i, len;
char frase[51];

printf("Digite uma string:\n");
scanf("%s",frase);

len = strlen(frase);

for (i=len-1;i>=0;i--){
    printf("%c",frase[i]);
}

return 0;

}
