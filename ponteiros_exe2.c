#include <stdio.h>
#include <stdlib.h>

int main(){
 int y=15, z=10, x=1, *px;
 px=&x;
 printf("x = %d\n",x); //imprime o conte�do de x
 printf("px = %u\n",px); //imprime o endere�o contido em px
 printf("*px+1 = %d\n",*px+1); //conte�do + 1
printf("*px = %d\n\n",*px); //imprime o conte�do apontado
 (*px)++; //incrementa o conte�do apontado por px
 printf("Apos fazer (*px)++ \n *px = %d\n",*px);
//imprime o conte�do ap�s alterado
 printf(" px = %u\n\n",px); //imprime o endere�o
}
