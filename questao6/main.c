/* 6. Assumindo que pulo[] é um vetor do
tipo int, quais das seguintes expressões
referenciam o valor do terceiro elemento
do vetor?
*/

#include <stdio.h>

int main()
{
    int pulo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("3o valor de pulo = %d", *(pulo + 2));
    printf("\n3o valor de pulo = %d", *(pulo + 4));
    printf("\n3o valor de pulo = %d", pulo + 4);
    printf("\n3o valor de pulo = %d", pulo + 2);
    printf("\n");

    for(int i=0; i<10; i++)
    {
        printf("\npulo[%d] = %d", i, pulo[i]);
    }
}

/*
Saída:

3o valor de pulo = 3 (CORRETA)
3o valor de pulo = 5
3o valor de pulo = 6422276
3o valor de pulo = 6422268

pulo[0] = 1
pulo[1] = 2
pulo[2] = 3
pulo[3] = 4
pulo[4] = 5
pulo[5] = 6
pulo[6] = 7
pulo[7] = 8
pulo[8] = 9
pulo[9] = 10
*/