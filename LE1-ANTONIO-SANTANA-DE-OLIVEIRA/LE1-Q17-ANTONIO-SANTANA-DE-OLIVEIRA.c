/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q17 (Lê duas datas do teclado e executa funções a partir disso)
Programação 1
04/06/2022
*/

#include <stdio.h>
#include <math.h>

typedef struct {    //Struct com as variáveis que serão utilizadas
int d1,m1;
int d2,m2;
} tEstrutura;

int main(){

int maior=1,menor=0;

tEstrutura datas;  //Definição da nomenclatura para orientação das variáveis
printf("Insira as datas:\n");
scanf("%d %d",&datas.d1,&datas.m1);
scanf("%d %d",&datas.d2,&datas.m2);

if (datas.m1==datas.m2 && datas.d1==datas.d2){printf("As datas sao iguais!\n");return 0;}

while(maior>=menor){  //Declaração do loop que roda até que a menor data se torne a maior

    if (datas.m1>datas.m2){maior=datas.m1;datas.m2++;menor=datas.m2;}    //Comparação e incremento das datas para obtenção da maior e menor data
    else if (datas.m1<datas.m2){maior=datas.m2;datas.m1++;menor=datas.m1;}
    else {
        if(datas.d1>datas.d2){maior=datas.m1;datas.m2++;menor=datas.m2;}
        else if (datas.d1<datas.d2){maior=datas.m2;datas.m1++;menor=datas.m1;}
        else{break;}
    }

    if ((maior==4)||(maior==6)||(maior==9)||(maior==11)){     //Comparações numéricas para obtenção do número de dias da maior data
        printf("O maior mes tem 30 dias!\n");
    }

    else if ((maior==1)||(maior==3)||(maior==5)||(maior==7)||(maior==8)||(maior==10)||(maior==12)){
        printf("O maior mes tem 31 dias!\n");
    }

    else if(maior==2){
        printf("O maior mes tem 28 dias!\n");
    }

}

return 0;

}


