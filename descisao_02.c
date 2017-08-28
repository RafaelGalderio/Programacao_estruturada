#include <stdio.h>
#include <math.h>
int main()
{

float num[15];
int i;
printf ("Informe 15 numeros aleatorios: \n");
for (i=0; i<15; i++ )
{
    scanf ("%f",&num[i]);
    num[i]=pow (num[i],2);
}
for (i=0; i<15; i++)
{
    printf ("\n %i O numero ao quadrado eh: %.4f",i+1,num[i]);
}
    return 0;
}
/*
Escreva um programa que receba quinze números do usuário e imprima o quadrado de cada
número.
*/
