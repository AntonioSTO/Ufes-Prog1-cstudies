/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo LE1-Q16 (L� dois pontos do teclado e calcula a dist�ncia entre eles, a �rea do tri�ngulo ret�ngulo formado com as retas paralelas aos eixos, diz o quadrante a que pertencem e imprime os pontos sim�tricos a eles)
Programa��o 1
04/06/2022
*/

#include <stdio.h>
#include <math.h>

typedef struct {    //Struct com as vari�veis que ser�o utilizadas
float x1,y1;
float x2,y2;
char quadrante1[30];
char quadrante2[30];

} tCoordenadas;

int main(){

float distancia,area;

tCoordenadas pontos;  //Defini��o da nomenclatura para orienta��o das vari�veis
printf("Insira os dois pontos:\n");
scanf("%f %f",&pontos.x1,&pontos.y1);
scanf("%f %f",&pontos.x2,&pontos.y2);

distancia = sqrt(((pontos.x2-pontos.x1)*(pontos.x2-pontos.x1))+((pontos.y2-pontos.y1)*(pontos.y2-pontos.y1))); //C�lculo da dist�ncia
area = (((pontos.x2-pontos.x1)*(pontos.y2-pontos.y1))/2); //C�lculo da �rea
if (area<0){area *= -1;} //Condicional para evitar valores de �rea negativos

printf("A distancia entre os dois pontos eh %.3f\n",distancia);
printf("A area do triangulo formado pelas retas paralelas aos eixos eh %.3f\n",area);

if (pontos.x1>0 && pontos.y1>0){strcpy(pontos.quadrante1,"no primeiro quadrante");}    //Opera��es l�gicas para obten��o do quadrante de x1,y1
else if (pontos.x1>0 && pontos.y1<0){strcpy(pontos.quadrante1,"no quarto quadrante");}
else if (pontos.x1<0 && pontos.y1>0){strcpy(pontos.quadrante1,"no segundo quadrante");}
else if (pontos.x1<0 && pontos.y1<0){strcpy(pontos.quadrante1,"no terceiro quadrante");}
else {strcpy(pontos.quadrante1,"em cima de um dos eixos");}

if (pontos.x2>0 && pontos.y2>0){strcpy(pontos.quadrante2,"no primeiro quadrante");}    //Opera��es l�gicas para obten��o do quadrante de x2,y2
else if (pontos.x2>0 && pontos.y2<0){strcpy(pontos.quadrante2,"no quarto quadrante");}
else if (pontos.x2<0 && pontos.y2>0){strcpy(pontos.quadrante2,"no segundo quadrante");}
else if (pontos.x2<0 && pontos.y2<0){strcpy(pontos.quadrante2,"no terceiro quadrante");}
else {strcpy(pontos.quadrante2,"em cima de um dos eixos");}

printf("O primeiro ponto esta %s, e o segundo esta %s.\n",pontos.quadrante1,pontos.quadrante2);
printf("Os pontos simetricos sao (%.2f,%.2f) e (%.2f,%.2f)\n",-pontos.x1,-pontos.y1,-pontos.x2,-pontos.y2);


return 0;
}
