/*
13. Implemente em linguagem C uma função em um programa 
de computador que leia n valores do tipo float e os apre-
sente em ordem crescente. Utilize alocação dinâmica de me-
mória para realizar a tarefa.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Defina a quantidade de n:");
    scanf("%d", &n);

    int *x, i;
    x = malloc(n*sizeof(int)); // definir espaço

    // entrar com os valores
    for(i=0; i<n; i++)
    {
        printf("Entre com o x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    
    //ordena crescente
    for(i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(x[i] < x[j])
            {
                int aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }

    // mostrar valores ordenados
    for(i=0; i<n; i++)
    {
        printf("%d", x[i]);
        if(i!=(n-1)) printf(", ");
    }
    
    free(x); // liberar memória utilizada

    return 0;
}