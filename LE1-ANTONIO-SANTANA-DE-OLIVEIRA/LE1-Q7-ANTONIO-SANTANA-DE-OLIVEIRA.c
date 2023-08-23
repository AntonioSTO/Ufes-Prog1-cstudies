/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q7 (Lê um mês (numérico) do teclado e diz quantos dias tem)
Programação 1
02/06/2022
*/

#include <stdio.h>

int main(){

int mes,bol=1;

printf("Insira o mes:\n");
scanf("%d",&mes);

while(bol){
    if ((mes>12) || (mes<1)){
        printf("Entrada invalida!\nInsira o mes:\n");
        scanf("%d",&mes);
    }

    else if ((mes==4)||(mes==6)||(mes==9)||(mes==11)){
        printf("O mes escolhido tem 30 dias!\n");
        break;
    }

    else if ((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)){
        printf("O mes escolhido tem 31 dias!\n");
        break;
    }

    else{
        printf("O mes escolhido tem 28 dias!\n");
        break;
    }
}

return 0;

}
