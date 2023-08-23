/*
Aluno: Antônio Sant'Ana de Oliveira
Código Tutorial: Malloc e Free
02/07/2022
*/

#include <stdio.h>

int main(){
    int *p, *q;
    p = malloc (sizeof (int));
    *p = 123;
    q = malloc (sizeof (int));
    *q = *p;
    q = p;

    printf("%d\n",*q);
    printf("%d\n",q);

    free (p);
    q = NULL;

    printf("%d\n",p);
    printf("%d\n",q);

    return 0;

}
