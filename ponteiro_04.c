#include <stdio.h>
#include <stdlib.h>

int main()
    {
    int x=500, *px;
    px=&x;
    printf("\n%d",*px);
    printf("\n%u",&px);
    printf ("\nInforme um valor para x: ");
    scanf ("%d",&x);
    printf ("%d",*px/2);


    }





/*
4 � Escreva um programa atribuindo o endere�o da vari�vel x a um ponteiro px, leia um valor para x
e o divida por 2 (sempre usando o ponteiro). Mostre o resultado da divis�o tamb�m utilizando o
ponteiro.
*/
