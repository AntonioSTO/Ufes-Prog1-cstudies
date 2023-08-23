/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q15 (L� dois inteiros positivos e verifica se o segundo corresponde aos �ltimos d�gitos do primeiro)
Programa��o 1
02/06/2022
*/

#include <stdio.h>

int encaixe(int n1, int n2) {  //Definida fun��o "encaixe" para saber se n2 corresponde aos ultimos digitos de n1

while (n2!= 0 && n1%10 == n2%10) { //Aproxima n2 de 0 enquanto checa os resultados de divis�o por 10 entre n1 e n2
    n1 = n1/10;
    n2 = n2/10;
  }

if (n2 == 0){  //Retorna 'Verdadeiro' para a fun��o
    return 1;
}
else{
    return 0; //Retorna 'Falso' para a fun��o
}
}

int main(){

int n1,n2;
scanf("%d",&n1);
scanf("%d",&n2);

if (encaixe(n1,n2)==0){printf("n2 n encaixa em n1\n");} //Confere o retorno da fun��o 'encaixe' e printa o resultado obtido
else{printf("n2 encaixa em n1");}

return 0;

}
