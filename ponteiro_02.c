#include <stdio.h>
#include <stdlib.h>

int main()
{int *pnum, num=500;
pnum=&num;
 printf ("\nO valor da variavel num eh: %u",pnum);
 printf ("\nO endereco da variavel num eh %u",&pnum);
}

/*
Escreva uma instrução para inicializar o ponteiro pnum com o endereço da variável num.
*/
