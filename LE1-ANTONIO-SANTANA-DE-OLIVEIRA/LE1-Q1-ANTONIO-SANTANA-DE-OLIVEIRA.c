/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q1 (Leitura de 3 n�meros do teclado e impress�o do maior entre eles)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int main(){

int num1,num2,num3;
int maior_num;
scanf("%d\n%d\n%d",&num1,&num2,&num3);

if (num1>num2){
    maior_num = num1;
}
else{
    maior_num = num2;
}

if(num3>maior_num){
    printf("%d",num3);
}
else{
    printf("%d",maior_num);
}

return 0;

}
