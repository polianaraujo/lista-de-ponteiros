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

    // (f)
    p3 = p3 + 4;
    printf("%c \n", *p3);
    //Expectativa = e
    //Saída = e

    // (g)
    p3--;
    printf("%c \n", *p3);
    //Expectativa = t, pois o último p3 = e = p3[4]
    // p3-- = p3[4-1] = p[3] = t
    //Saída = t

    // (h)
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;                     // p4 = &vetor[0] =  6422256
    idade = *p4;                    // idade = 31
    printf("%d \n", idade);
    //Expectativa = 31
    //Saída = 31

    // (i)
    p5 = p4 + 1;             //p5 = &vetor[0+1]
    idade = *p5;             //idade = 45
    printf("%d \n", idade);
    //Expectativa = 45
    //Saída = 45

    // (j)
    p4 = p5 + 1;             //p4 = &vetor[1+1]
    idade = *p4;             //idade = 27
    printf("%d \n", idade);
    //Expectativa = 45
    //Saída = 45

    // (l)
    p4 = p4 - 2;             //p4 = &vetor[2-2]
    idade = *p4;             //idade = 31
    printf("%d \n", idade);
    //Expectativa = 31
    //Saída = 31

    // (m)
    p5 = &vetor[2] - 1;      //p5 = p4 - 1 = &vetor[2-1]
    printf("%d \n", *p5);    //*p5 = *&vetor[1] = 45
    //Expectativa = 45
    //Saída = 45

    // (n)
    p5++;                    //p5 = 6422259 + 1
    printf("%d \n", *p5);    //*p5 = *&vetor[2] = 27
    //Expectativa = 27
    //Saída = 27

    return 0;
}