/*
11. Suponha que as seguintes declarações tenham
sido realizadas
*/
#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value=2.2;
    int i=3;

    aloha[2] = value;          //VÁLIDO
    //aloha[2] = 2.2

    scanf("%f\n", &aloha);     //VÁLIDO
    //&aloha = &aloha[0] = 'valor inserido pelo usuário'

    //aloha = value;           //INVÁLIDO
    //aloha = &aloha[0] = 2.2; mas um endereço deve ser inteiro e não decimal

    printf("%f\n", aloha);     //VÁLIDO
    //aloha = 2.2 (valor definido anteriormente, mas pode acabar sendo qualquer outro endereço)

    coisas[4][4] = aloha[3];   //VÁLIDO
    
    //coisas[5] = aloha;       //INVÁLIDO
    //

    //pf = value;              //INVÁLIDO
    //

    pf = aloha;                //VÁLIDO
    //pf recebe o endereço do primeiro elemento de aloha
}

