/*
13. Implemente em linguagem C uma função em um programa 
de computador que leia n valores do tipo float e os apre-
sente em ordem crescente. Utilize alocação dinâmica de me-
mória para realizar a tarefa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h>     // for sleep()

int main()
{
    double time_spent = 0.0;
    int n;

    printf("Defina a quantidade de n:");
    scanf("%d", &n);

    int *x, i;
    x = malloc(n*sizeof(int)); // definir espaço

    // entrar com os valores (questao 13)
    for(i=0; i<n; i++)
    {
        printf("Entre com o x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    /* função para testar o tempo para a questao 16
    for(i=0; i<n; i++)
    {
        x[i] = rand() % 100;
        printf("x[%d] = %d\n", i, x[i]);
    }*/
    
    //ordena crescente
    clock_t begin = clock();
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
    printf("\nTempo de execucao: %f segundos", time_spent);
    return 0;
}