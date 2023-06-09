/*
14. Reimplemente o programa da questão 13 utilizando a
a função qsort() do C. Comente o seu código para reali-
zar a tarefa.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h>     // for sleep()

// função para fazer a comparação
int comparador(const void *a, const void *b)
{
    if ( *(int*)a > *(int*)b ) return 1; // se o primeiro elemento foi > que o segundo = retornar 1
    else if ( *(int*)a < *(int*)b ) return -1; // se o primeiro elemento foi < que o segundo = retornar -1
    else return 0; // se nenhuma das duas opções anteriores = retornar 0
}

int main()
{
    double time_spent = 0.0;
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

    /* função para testar o tempo para a questao 16, com muitos elementos
    for(i=0; i<n; i++)
    {
        x[i] = rand() % 100;
        printf("x[%d] = %d\n", i, x[i]);
    }*/
    
    clock_t begin = clock();
    //função C que faz o laço de repetição utilizando a função de comparação
    qsort(x, n, sizeof(int), comparador);
    clock_t end = clock();

    // mostrar valores ordenados
    for(i=0; i<n; i++)
    {
        printf("%d", x[i]);
        if(i!=(n-1)) printf(", ");
    }
    
    free(x); // liberar memória utilizada
    
    sleep(3);
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nTempo de execucao é %f segundos", time_spent);
    
    return 0;
}