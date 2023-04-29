/*
10. Implemente um programa de computador para testar estas
suposições e compare as respostas oferecidas pelo programa
com as respostas que você idealizou.
*/

#include <stdio.h>

int main()
{
    //9.1. x for declarado como char?
    char xc[4]={0, 1, 2, 3};
    //xc = &xc[0] = 4092;
    /*como o tipo char ocupa 1 byte, a cada acréscimo ocupará
    1 byte a mais*/

    printf("x tipo char:\n");
    
    printf("%d\n", xc+1);
    //Esperada: 4093
    //Saída:    6422301
    printf("%d\n", xc+2);
    //Esperada: 4094
    //Saída:    6422302
    printf("%d\n", xc+3);
    //Esperada: 4095
    //Saída:    6422303
    printf("\n");

    //A única diferença é o endereço, mas a lógica é a esperada

    //9.2. x for declarado como int?
    int xi[4]={0, 1, 2, 3};
    //xi = &xi[0] = 4092;
    /*como o tipo int ocupa 2 bytes, a cada acréscimo ocupará
    2 bytes a mais*/

    printf("x tipo int:\n");
    
    printf("%d\n", xi+1);
    //Esperada: 4094
    //Saída:    6422288
    printf("%d\n", xi+2);
    //Esperada: 4096
    //Saída:    6422292
    printf("%d\n", xi+3);
    //Esperada: 4098
    //Saída:    6422296
    printf("\n");

    //A única diferença é o endereço, mas a lógica é a esperada

    //9.3. x for declarado como float?
    float xf[4]={0.0, 1.1, 2.2, 3.3};
    //xf = &xf[0] = 4092;
    /*como o tipo float ocupa 4 bytes, a cada acréscimo ocupará
    4 bytes a mais*/

    printf("x tipo float:\n");
    
    printf("%d\n", xf+1);
    //sperada: 4096
    //Saída:   6422272
    printf("%d\n", xf+2);
    //Esperada: 4100
    //Saída:    6422276
    printf("%d\n", xf+3);
    //Esperada: 4104
    //Saída:    6422280
    printf("\n");

    //A única diferença é o endereço, mas a lógica é a esperada

    //9.4. x for declarado como double?
    double xd[4]={0, 1, 2, 3};
    //xd = &xd[0] = 4092;
    /*como o tipo double ocupa 8 bytes, a cada acréscimo ocupará
    8 bytes a mais*/

    printf("x tipo double:\n");
    
    printf("%d\n", xd+1);
    //Esperada: 4100
    //Saída:    6422240
    printf("%d\n", xd+2);
    //Esperada: 4108
    //Saída:    6422248
    printf("%d\n", xd+3);
    //Esperada: 4116
    //Saída:    6422256

    //A única diferença é o endereço, mas a lógica é a esperada
}