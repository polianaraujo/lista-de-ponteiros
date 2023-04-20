/*
8. O que fazem os seguintes programas em C?
*/

#include <stdio.h>

int main()
{
    int vet[] = {4,9,13}; //vetor vet com 3 elementos declarado
    int i;                //inteiro i
    
    for(i=0;i<3;i++)
    {
        printf("valor do %do (vet[%d]) elemento = %d \n", (i+1), i, *(vet+i));
    }
    /*laço de repetição para imprimir os valores
    percorrendo de 0 até 2 (três valores) elementos
    do vetor*/
    
    return 0;
}