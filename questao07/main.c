/*
7. Considerando a declaração 
int mat[4], p*, x;
quais das seguintes expressões são válidas?
Justifique.
*/

#include <stdio.h>

int main()
{
    int mat[4]={0,1,2,3}, *p, x;
    //int  *p2, *p3;
    //CORRETA
    p = mat+1;       // p1 = mat[0 + 1] = mat[1] = 1
    printf("p = %d \n", p);
    //Saída = 1
    
    //INCORRETA
    //p2 = mat++;       //não existe essa expressão
    //printf("%d", p2);

    //INCORRETA
    //p3 = ++mat;       //não existe essa expressão
    //printf("%d", p3);

    //CORRETA
    x = (*mat)++;     //x = endereço de mat + 1 = mat[0 + 1] = 1
    printf("x = %d", x);
    //Saída = 1

    return 0;
}