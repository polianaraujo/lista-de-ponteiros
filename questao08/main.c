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

    /*Saída:
    valor do 1o (vet[0]) elemento = 4
    valor do 2o (vet[1]) elemento = 9
    valor do 3o (vet[2]) elemento = 13
    */

    for(i=0;i<3;i++)
    {
        printf("valor do %do (vet[%d]) elemento = %X \n", i+1, i, vet+i);
    }
    /*laço de repetição para imprimir os endereços de cada
    índice percorrendo de 0 até 2 (três endereços) elementos
    do vetor*/

    /*Saída:
    valor do 1o (vet[0]) elemento = 61FF10
    valor do 2o (vet[1]) elemento = 61FF14
    valor do 3o (vet[2]) elemento = 61FF18
    */
    
    return 0;
}