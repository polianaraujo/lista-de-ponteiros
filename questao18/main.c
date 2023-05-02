/*
18. Crie uma função capaz de realizar multiplicação matricial
da forma C=AxB. A função deve receber 6 argumentos: os ponte-
iros para as matrizes A, B e C, o número de linhas e colunas 
de A e o número de colunas de B (assuma que o número de colu-
nas de A é igual ao número de linhas de B). O resultado da mul-
tiplicação deve ficar armazenado em C. Crie um programa para 
testar sua implementação, capaz de utilizar a função de multi-
plicação e imprimir as três matrizes. A função criada para mul-
tiplicação não deve realizar nenhum tipo de saída de dados no 
terminal. 
Exemplo: para multiplicar duas matrizes (A e B) de dimensões 2x3
e 3x4, respectivamente (o resultado deve ficar armazenado em C).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int al, ac, bl, bc, i, j;
    //x = malloc(nl * sizeof(int*));
    //x[0]=malloc(nc * nl * sizeof(int));

    //definindo os tamanhos de A e B
    printf("Defina as dimensoes de A = ");
    scanf("%d %d", &al, &ac);
    
    printf("Defina as dimensoes de B = ");
    scanf("%d %d", &bl, &bc);
    
    printf("A[%d][%d] e B[%d][%d]\n", al, ac, bl, bc);

    int A[al][ac];
    int B[bl][bc];
    int C[al][bc];

    //definindo os valores da matriz A
    printf("\nMatriz A:\n");
    for(i=0; i<al; i++)
    {
        for(j=0; j<ac; j++)
        {
            A[i][j] = rand() % 10;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    //definindo os valores da matriz B
    printf("\nMatriz B:\n");
    for(i=0; i<bl; i++)
    {
        for(j=0; j<bc; j++)
        {
            B[i][j] = rand() % 10;
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    //multiplicação de AxB, matriz C
    // A(m,n) * B(n,p) = C(m,p)
    for(i=0; i<al; i++){
        for(j=0; j<bc; j++) {
            //C[i][j] = 0;
            int aux=0;
            for(int x=0; x<bl; x++) {
                aux += A[i][x] * B[x][j];
            }
            C[i][j] = aux;
            //printf("%d ", C[i][j]);
        }
        //printf("\n");
    }


    //imprimindo matriz C
    printf("\nMatriz C:\n");
    for(i=0; i<al; i++)
    {
        for(j=0; j<bc; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    //free(x[0]);
    //free(x);

    return 0;
}
