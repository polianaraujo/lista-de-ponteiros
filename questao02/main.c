/*Mostre o que será impresso por programa
 supondo que i ocupa o endereço 4094 na memória*/

#include <stdio.h>

int main()
{
    int i=5, *p;
    p=&i;

    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    //Saída: 43881bdc 7 5 15 9
    
    return 0;
}
