/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q6 (Calcula e imprime a tabuada sem repetir as multiplica��es)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int main(){

int n,i,e;
scanf("%d",&n);

for (i=1;i<=n;i++){ //Loop para obten��o dos i numeros de 1 ate n
    for (e=i;e<=n;e++){ //Loop para obten��o da tabuada de i e limita��o das repeti��es de resultado
        printf("%d x %d = %d\n",i,e,i*e);}
}

return 0;

}
