/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q13 (Imprime os divisores naturais dos n�meros de 1 a n)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int main(){

int n,i,e;
scanf("%d",&n);

for (i=1;i<=n;i++){ //Loop para obten��o dos i numeros de 1 ate n
    for (e=1;e<=i;e++){ //Loop para obten��o dos divisores de i
    if (i%e == 0){printf("%d ",e);}}
    printf("\n");
}

return 0;

}
