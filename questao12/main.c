/*
12. O que é um ponteiro para uma função? 
Pesquise na Internet referências sobre o assunto
e escreva um pequeno programa exemplificando o uso
deste recurso.

RESPOSTA:
Numa máquina, as variáveis são interpretas como bits
de 0s e 1s, e para conseguir interpretar elas de
forma organizada e mais otimizada é através do endere-
çamento que é único para cada bit.
E é basicamente isso que um ponteiro é, um tipo de da-
do que serve para indicar, ou armazenar, um endereço
de memória(refer).
Um ponteiro não é um inteiro, float, double ou char, 
ele é um tipo que armazena o endereço em que o inte-
iro está alocado (refer).

https://www.cprogressivo.net/2013/03/O-que-sao-ponteiros-para-que-servem-e-como-usar-em-C.html

A seguir será exemplificado um pequeno programa com o
uso de ponteiro.
*/

#include <stdio.h>

int main()
{
    //Declarar ponteiro e uma variável inteira
    int *p, a;
    
    a = 0;
    printf("Valor de a = %d\n", a);  // a = 0
    printf("Endereço de a = %d\n", &a); // &a = 6422296

    p = &a;
    /* p é um ponteiro e pode armazenar qualquer valor 
    inteiro, então ele está armazenando o endereço de a
    que é encontrado por &a.
    */

    printf("Endereço p = %d\n", p); // p = &a = 6422296
    printf("Conteúdo do endereço p = %d", *p); // *p = a = 0
    // o asterisco vai mostrar o conteúdo
}