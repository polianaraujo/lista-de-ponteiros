/*
14. Reimplemente o programa da questão 13 utilizando a
a função qsort() do C. Comente o seu código para reali-
zar a tarefa.
*/


#include <stdio.h>
#include <stdlib.h>

// função para fazer a comparação
int comparador(const void *a, const void *b)
{
    if ( *(int*)a > *(int*)b ) return 1; // se o primeiro elemento foi > que o segundo = retornar 1
    else if ( *(int*)a < *(int*)b ) return -1; // se o primeiro elemento foi < que o segundo = retornar -1
    else return 0; // se nenhuma das duas opções anteriores = retornar 0
}

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
    
    qsort(x, n, sizeof(int), comparador);

    /*ordena crescente
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
    }*/

    // mostrar valores ordenados
    for(i=0; i<n; i++)
    {
        printf("%d", x[i]);
        if(i!=(n-1)) printf(", ");
    }
    
    free(x); // liberar memória utilizada

    return 0;
}