//Seja o seguinte trecho de programa
int i=3, j=5;
int *p, *q;
p=&i;
q=&j;

//&: endereço da variável
//*: valor do endereço da variável

i=3, j=5;
*p, *q;
p=&i; // o conteúdo de p é igual ao endereço de i
q=&j; // o conteúdo de q é igual ao endereço de j

//Determine o valor das seguintes expressões:

p==&i;
//Resposta: p é igual ao endereço de i

*p - *q;
//o valor de p é o conteúdo de i
//o valor de q é o conteúdo de j
//Resposta: o valor de p - o valor de q

**&p;
//Resposta: valor do valor do endereço de p

3 = *p/(*q) + 7;
//Resposta: o valor de p dividido pelo valor de q + 7 é igual a 3