/*
7. Considerando a declaração 
int mat[4], p*, x;
quais das seguintes expressões são válidas?
Justifique.
*/

#include <stdio.h>

int main()
{
    int mat[4], *p, x;

    printf("%d", (mat+1));

    return 0;
}