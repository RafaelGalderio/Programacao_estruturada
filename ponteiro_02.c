#include <stdio.h>
#include <stdlib.h>

int main()
{int *pnum, num=500;
pnum=&num;
 printf ("\nO valor da variavel num eh: %u",pnum);
 printf ("\nO endereco da variavel num eh %u",&pnum);
}

/*
Escreva uma instru��o para inicializar o ponteiro pnum com o endere�o da vari�vel num.
*/
