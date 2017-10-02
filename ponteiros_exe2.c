#include <stdio.h>
#include <stdlib.h>

int main(){
 int y=15, z=10, x=1, *px;
 px=&x;
 printf("x = %d\n",x); //imprime o conteúdo de x
 printf("px = %u\n",px); //imprime o endereço contido em px
 printf("*px+1 = %d\n",*px+1); //conteúdo + 1
printf("*px = %d\n\n",*px); //imprime o conteúdo apontado
 (*px)++; //incrementa o conteúdo apontado por px
 printf("Apos fazer (*px)++ \n *px = %d\n",*px);
//imprime o conteúdo após alterado
 printf(" px = %u\n\n",px); //imprime o endereço
}
