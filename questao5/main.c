/* 
5. Determine o que será mostrado pelo seguinte
programa (compile-o, execute-o e verifique se
foram obtidas as respostas esperadas).
*/

#include <stdio.h>

int main(void)
{
    float vet[5]={1.1 , 2.2 , 3.3 , 4.4 , 5.5};
    //vetor com 5 elementos não inteiros
    float *f;
    //ponteiro f, ou seja, vai guardar o conteúdo de uma variável
    int i;
    f=vet; //f guarda o conteúdo de 'vet'
    printf("contador/valor/valor/endereco/endereco");
    for(i=0; i<=4; i++)
    {
        printf("\ni = %d ",i);                // i = i (CORRETO) => valor de i
        printf(", vet[%d] = %.1f ",i,vet[i]); // vet[i] = vet[i] (CORRETO) => elemento i de 'vet'
        printf(", *(f+%d) = %.1f ",i,*(f+i)); // *(f+i) = *(f+i) (CORRETO) => conteúdo do elemento f+i (f guarda cada elemento de 'vet', então f+i é o elemento vet[i])
        printf(", &vet[%d] = %X ",i,&vet[i]); // &vet[i] = &vet[i] (CORRETO) => endereço do elemento i de 'vet'
        printf(", (f+%d) = %X ",i,f+i);       // (f+i) = f+i (CORRETO) => elemento f+i = vet[i]
    }
    return 0;
}

/*
saída

contador/valor/valor/endereco/endereco
i = 0 vet[0] = 1.1 *(f+0) = 1.1 &vet[0] = 61FF04 (f+0) = 61FF04
i = 1 vet[1] = 2.2 *(f+1) = 2.2 &vet[1] = 61FF08 (f+1) = 61FF08
i = 2 vet[2] = 3.3 *(f+2) = 3.3 &vet[2] = 61FF0C (f+2) = 61FF0C
i = 3 vet[3] = 4.4 *(f+3) = 4.4 &vet[3] = 61FF10 (f+3) = 61FF10
i = 4 vet[4] = 5.5 *(f+4) = 5.5 &vet[4] = 61FF14 (f+4) = 61FF14
*/