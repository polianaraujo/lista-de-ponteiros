/*
15. Utilize a ideia do ponteiro para função pela função
qsort() para implementar sua própria função de ordenação,
mas que seja capaz de ordenar apenas inteiros do tipo int.
Para isso, sua função deverá receber, entre outros argu-
mentos, um ponteiro para a função de comparação que deter-
minará como os elementos do array serão ordenados.
*/
#include <stdio.h>
#include <stdlib.h>

//função para imprimir 
void print_array(float* v, int n) {
    for (int j = 0; j < n; j++) {
        printf("%.2f ", v[j]);
    }
    printf("\n");
}

//função para comparar
int compare (float* a, float* b)
{
  if (*a < *b) return -1;
  if (*a == *b) return 0;
  if (*a > *b) return 1;
}

//função de ordenação
void my_sort(float* v, int n, int (*pcomp)(float* ,float*)) {
    for (int sweep = 0; sweep < n; sweep++) {
        int swapped = 0;
        for (int i = 0; i < n - sweep - 1; i++) {
            if (pcomp(&v[i],&v[i+1]) == 1) {
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            return;
        }
    }
}

int main () {
    int n = 10;
    float* v = (float*)malloc(n * sizeof(float));
    int (*pcomp)(float* ,float*) = &compare;

    //preencher vetor comm números
    for (int j = 0; j < n; j++) {
        v[j] = (float)rand()/(float)(__INT_MAX__/100);
    }

    // Exibi-lo antes da ordenação
    print_array(v,n);

    // Ordenar
    my_sort(v,n,pcomp);
    // Exibi-lo depois da ordenado
    print_array(v,n);

    free(v);
}