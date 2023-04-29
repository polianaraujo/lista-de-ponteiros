/*
 4. Determine o que será mostrado pelo seguinte
 programa (compile-o, execute-o e verifique se
 foram obtidas as respostas esperadas).
*/

#include <stdio.h>

int main()
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);
    // valor = 10
    // p1 = endereço de valor (algum valor)
    // *p1 = conteúdo do endereço de valor -> *p1 = *&valor = valor
    // *p1 = 10 = valor -> que agora foi atribuído outro valor -> *p1 = 20 = valor
    //Expectativa: 20
    //Saída: 20

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);
    // temp = 26.5
    // p2 = &temp = endereço de temp
    // *p2 = 29.0
    // *p2 = conteúdo do endereço de temp
    // *p2 = *&temp = temp -> temp = 29.0 (foi atribuído um novo valor para temp)
    //Expectativa: 29.0
    //Saída: 29.0

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
    // p3 = &nome[0] = endereço da primeira letra de nome
    // p3 = $
    // *p3 = conteúdo de p3 = P
    // aux = *p3 = P
    //Expectativa = P
    //Saída = P

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);
    // p3 = ( -> endereço do quarto elemento do nome
    // aux = conteúdo de p3 = e
    //Expectativa: e
    //Saída: e

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);
    // *nome = conteúdo do endereço de nome = P
    // p3 = nome = endereço de nome = $
    // *p3 = conteúdo de p3 = P
    //Expectativa = P
    //Saída = P

    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);

    /* (g) */
    p3--;
    printf("%c \n", *p3);

    /* (h) */
    valor[0] = 31;
    valor[1] = 45;
    valor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);

    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);

    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);

    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    /* (n) */
    p5++;
    printf("%d \n", *p5);

    return 0;
}