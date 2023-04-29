/*
9. Seja x um vetor de 4 elementos, declarado da forma
TIPO x[4];. Suponha que depois da declaração, x esteja
armazenado no endereço de memória 4092 (ou seja, o
endereço de x[0]). Suponha também que na máquina seja
usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do
tipo double ocupa 8 bytes. Quais serão os valores de x+1,
x+2 e x+3 se:
*/

//9.1. x for declarado como char?
char xc[4]={0,1,2,3};
xc = &xc[0] = 4092;
/*como o tipo char ocupa 1 byte, a cada acréscimo
ocupará 1 byte a mais*/

printf("%d", xc+1); //Saída esperada: 4093
printf("%d", xc+2); //Saída esperada: 4094
printf("%d", xc+3); //Saída esperada: 4095

//9.2. x for declarado como int?
int xi[4]={0,1,2,3};
xi = &xi[0] = 4092;
/*como o tipo int ocupa 2 bytes, a cada acréscimo
ocupará 2 bytes a mais*/

printf("%d", xi+1); //Saída esperada: 4094
printf("%d", xi+2); //Saída esperada: 4096
printf("%d", xi+3); //Saída esperada: 4098

//9.3. x for declarado como float?
float xf[4]={0,1,2,3};
xf = &xf[0] = 4092;
/*como o tipo float ocupa 4 bytes, a cada acréscimo
ocupará 4 bytes a mais*/

printf("%f", xf+1); //Saída esperada: 4096
printf("%d", xf+2); //Saída esperada: 4100
printf("%d", xf+3); //Saída esperada: 4104

//9.4. x for declarado como double?
double xd[4]={0,1,2,3};
xd = &xd[0] = 4092;
/*como o tipo double ocupa 8 bytes, a cada acréscimo
ocupará 8 bytes a mais*/

printf("%f", xd+1); //Saída esperada: 4100
printf("%d", xd+2); //Saída esperada: 4108
printf("%d", xd+3); //Saída esperada: 4116
    
}