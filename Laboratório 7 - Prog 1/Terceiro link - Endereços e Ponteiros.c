/*
Aluno: Ant�nio Sant'Ana de Oliveira
C�digo Tutorial: Endere�os e ponteiros
02/07/2022
*/

#include <stdio.h>

int main(void){

   int i; int *p;
   i = 1234; p = &i;
   printf ("*p = %d\n", *p);
   printf (" p = %ld\n", (long int) p);
   printf (" p = %p\n", (void *) p);
   printf ("&p = %p\n", (void *) &p);
   return 0;

}
