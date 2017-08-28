#include <stdio.h>
#include <math.h>
int main()
{
    float num_b, produto;
    int num_a, i;
    printf ("Informe um numero inteiro e numero real: \n");
    scanf ("%i %f",&num_a,&num_b);
    for (i=0; i<num_a; i++)
    {
        produto = produto+num_b;
    }
    printf ("O valor do produto eh %.2f: ",produto);
}
/*
Escreva um programa que realize o produto de A (número real) por B (número inteiro), ou seja, A
* B, através de adições (somas). Esses dois valores são passados pelo usuário através do teclado.
*/


