/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q12 (Imprime os divisores naturais de um n�mero n)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int main(){

int n,i;
scanf("%d",&n);

for (i=1;i<=n;i++){ //Loop para obten��o dos divisores de n
    if (n%i == 0){printf("%d ",i);}
}

return 0;

}
