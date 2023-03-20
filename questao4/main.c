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
    // *p1 = 10 -> que agora foi atribuído outro valor -> 20
    //Expectativa: 20
    //Saída: 20

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);
    // temp = 26.5
    // p2 = o endereço de temp
    // *p2 = 29.0 -> conteúdo do endereço de temp = 29.0
    // portanto *p2 = temp
    //Expectativa: 29.0
    //Saída: 29.0

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
    // p3 = $
    // aux = P
    //Expectativa: 29.0
    //Saída: 29.0

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);
    // p3 = ( -> endereço do quarto elemento do nome
    // aux = e -> conteúdo de p3 -> conteúdo do endereço do quarto elemento do nome
    //Expectativa: e
    //Saída: e

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);

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