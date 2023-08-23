/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q16 (Lê dois pontos do teclado e calcula a distância entre eles, a área do triângulo retângulo formado com as retas paralelas aos eixos, diz o quadrante a que pertencem e imprime os pontos simétricos a eles)
Programação 1
04/06/2022
*/

#include <stdio.h>
#include <math.h>

typedef struct {    //Struct com as variáveis que serão utilizadas
float x1,y1;
float x2,y2;
char quadrante1[30];
char quadrante2[30];

} tCoordenadas;

int main(){

float distancia,area;

tCoordenadas pontos;  //Definição da nomenclatura para orientação das variáveis
printf("Insira os dois pontos:\n");
scanf("%f %f",&pontos.x1,&pontos.y1);
scanf("%f %f",&pontos.x2,&pontos.y2);

distancia = sqrt(((pontos.x2-pontos.x1)*(pontos.x2-pontos.x1))+((pontos.y2-pontos.y1)*(pontos.y2-pontos.y1))); //Cálculo da distância
area = (((pontos.x2-pontos.x1)*(pontos.y2-pontos.y1))/2); //Cálculo da área
if (area<0){area *= -1;} //Condicional para evitar valores de área negativos

printf("A distancia entre os dois pontos eh %.3f\n",distancia);
printf("A area do triangulo formado pelas retas paralelas aos eixos eh %.3f\n",area);

if (pontos.x1>0 && pontos.y1>0){strcpy(pontos.quadrante1,"no primeiro quadrante");}    //Operações lógicas para obtenção do quadrante de x1,y1
else if (pontos.x1>0 && pontos.y1<0){strcpy(pontos.quadrante1,"no quarto quadrante");}
else if (pontos.x1<0 && pontos.y1>0){strcpy(pontos.quadrante1,"no segundo quadrante");}
else if (pontos.x1<0 && pontos.y1<0){strcpy(pontos.quadrante1,"no terceiro quadrante");}
else {strcpy(pontos.quadrante1,"em cima de um dos eixos");}

if (pontos.x2>0 && pontos.y2>0){strcpy(pontos.quadrante2,"no primeiro quadrante");}    //Operações lógicas para obtenção do quadrante de x2,y2
else if (pontos.x2>0 && pontos.y2<0){strcpy(pontos.quadrante2,"no quarto quadrante");}
else if (pontos.x2<0 && pontos.y2>0){strcpy(pontos.quadrante2,"no segundo quadrante");}
else if (pontos.x2<0 && pontos.y2<0){strcpy(pontos.quadrante2,"no terceiro quadrante");}
else {strcpy(pontos.quadrante2,"em cima de um dos eixos");}

printf("O primeiro ponto esta %s, e o segundo esta %s.\n",pontos.quadrante1,pontos.quadrante2);
printf("Os pontos simetricos sao (%.2f,%.2f) e (%.2f,%.2f)\n",-pontos.x1,-pontos.y1,-pontos.x2,-pontos.y2);


return 0;
}
