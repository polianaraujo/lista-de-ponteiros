/*
 3. Se i e j são variáveis inteiras e p e q
 ponteiros para int, quais das seguintes
 expressões de atribuição são ilegais?
*/

p = i;     //atribuição legal
q = &j;    //atribuição legal
p = &*&i;  //atribuição legal
i = (*&)j  //essa atribuição é ilegal
i = *&j;   //atribuição legal
i = *&*&j; //atribuição legal
q = *p;    //atribuição legal
i = (*p)++ + *q;