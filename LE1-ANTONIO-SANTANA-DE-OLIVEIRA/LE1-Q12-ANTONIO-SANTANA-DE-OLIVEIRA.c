/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q12 (Imprime os divisores naturais de um número n)
Programação 1
02/06/2022
*/

#include <stdio.h>

int main(){

int n,i;
scanf("%d",&n);

for (i=1;i<=n;i++){ //Loop para obtenção dos divisores de n
    if (n%i == 0){printf("%d ",i);}
}

return 0;

}
