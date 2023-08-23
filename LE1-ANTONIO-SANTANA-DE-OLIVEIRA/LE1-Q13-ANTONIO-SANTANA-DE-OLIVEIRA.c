/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q13 (Imprime os divisores naturais dos números de 1 a n)
Programação 1
02/06/2022
*/

#include <stdio.h>

int main(){

int n,i,e;
scanf("%d",&n);

for (i=1;i<=n;i++){ //Loop para obtenção dos i numeros de 1 ate n
    for (e=1;e<=i;e++){ //Loop para obtenção dos divisores de i
    if (i%e == 0){printf("%d ",e);}}
    printf("\n");
}

return 0;

}
