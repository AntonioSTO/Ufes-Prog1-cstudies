/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q6 (Calcula e imprime a tabuada sem repetir as multiplicações)
Programação 1
02/06/2022
*/

#include <stdio.h>

int main(){

int n,i,e;
scanf("%d",&n);

for (i=1;i<=n;i++){ //Loop para obtenção dos i numeros de 1 ate n
    for (e=i;e<=n;e++){ //Loop para obtenção da tabuada de i e limitação das repetições de resultado
        printf("%d x %d = %d\n",i,e,i*e);}
}

return 0;

}
