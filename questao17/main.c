/*
17. Escreva uma função em liguagem C que escreva em um vetor
a soma dos elementos correspondentes de outros dois vetores 
(os tamanhos dos vetores devem ser fornecidos pelo usuário).
Por exemplo, se o primeiro vetor contiver os elementos 1, 3,
0 e -2, e o segundo vetor contiver os elementos 3, 5, -3 e 1,
o vetor de soma terá valores resultantes iguais a 4, 8, -3 e
-1. A função deve receber 4 argumentos: os nomes dos três ve-
tores e o número de elementos presentes em cada vetor.
Exemplo: soma_vetores(vet1, vet2, resultado, 4);
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Defina a quantidade n de elementos que os dois vetores devem ter:");
    scanf("%d", &n);

    int *x1, *x2, *s, i;
    x1 = malloc(n*sizeof(int)); // definir espaço  para o vetor1
    x2 = malloc(n*sizeof(int)); // definir espaço  para o vetor2
    s = malloc(n*sizeof(int)); // definir espaço  para o vetor soma

    // entrar com os valores do vetor1
    for(i=0; i<n; i++)
    {
        printf("Entre com o x1[%d]: ", i);
        scanf("%d", &x1[i]);
    }
    // entrar com os valores do vetor2
    for(i=0; i<n; i++)
    {
        printf("Entre com o x2[%d]: ", i);
        scanf("%d", &x2[i]);
    }
    
    //soma
    for(i=0; i<n; i++)
    {
        s[i] = x1[i] + x2[i];
    }

    // mostrar vetor soma
    printf("Vetor soma = {");
    for(i=0; i<n; i++)
    {
        printf("%d", s[i]);
        if(i!=(n-1)) printf(", ");
    }
    printf("}");

    free(x1); // liberar memória utilizada pelo vetor1
    free(x2); // liberar memória utilizada pelo vetor2
    free(s); // liberar memória utilizada pelo vetor soma

    return 0;
}