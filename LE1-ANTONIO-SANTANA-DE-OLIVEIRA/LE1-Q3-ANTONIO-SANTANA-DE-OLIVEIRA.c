/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q3 (Programa que l� um n�mero inteiro do teclado e diz se � par ou �mpar, se � positivo, negativo ou
nulo, e se o seu m�dulo � maior, menor ou igual a 10.)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int main(){
int num;
char par_impar[10], sinal[10], modulo[10];

scanf("%d",&num);

if (num%2 == 0){
    strcpy(par_impar,"par");
}
else{
    strcpy(par_impar,"impar");
}
if (num>0){
    strcpy(sinal,"positivo");
}
else if (num==0){
    strcpy(sinal,"nulo");
}
else{
    strcpy(sinal,"negativo");
    num = num*(-1);
}
if(num>10){
    strcpy(modulo,"maior que");
}
else if (num==10){
    strcpy(modulo,"igual a");
}
else{
    strcpy(modulo,"menor que");
}

printf("Este numero eh %s %s e seu modulo %s 10",par_impar,sinal,modulo);

return 0;

}
