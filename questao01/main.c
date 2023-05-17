//Seja o seguinte trecho de programa
int i=3, j=5;
int *p, *q;
p=&i;
q=&j;

//&: endereço da variável
//*: conteúdo do endereço da variável

i=3, j=5; // i e j inteiros
*p, *q;   // p e q ponteiros
p=&i;     // p vai armazenar o endereço de i
q=&j;     // q vai armazenar o endereço de j

//Determine o valor das seguintes expressões:

p==&i;
//Resposta: p é igual ao endereço de i

*p - *q; //operação de subtração dos ponteiros
//o conteúdo de p é o endereço de i
//o conteúdo de q é o endereço de j
//Resposta: o conteúdo de p - o conteúdo de q

**&p;
//Resposta: conteúdo do conteúdo do endereço de p

3 = *p/(*q) + 7;
//Resposta: o conteúdo de p dividido pelo conteúdo de q, adicionado 7 é igual a 3