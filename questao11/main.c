/*
11. Suponha que as seguintes declarações tenham
sido realizadas
*/
#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value=2.2;
    int i=3;

    aloha[2]=value;         //VÁLIDO
    scanf("%f", &aloha);     //
    aloha = value;           //
    printf("%f", aloha);
    coisas[4][4] = aloha[3];
}

