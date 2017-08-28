#include <stdio.h>
#include <math.h>
int main()
{int i, quantidade, maior=0, menor=99999999, num;
printf ("Informe uma quantidadede numeros \n");
scanf ("%i",&quantidade);
for (i=0; i<quantidade; i++)
    {
        printf ("\nInforme os numeros: ",i+1);
        scanf ("%i",&num);
        if (num<menor)
        {
            menor=num;

        }
        if (num>maior)
        {
            maior = num;
        }
     }
printf("O valor menor e %i e o valor maior e %i",menor, maior);

}

/*
Criar um programa que leia um número (NUM), e depois leia NUM números inteiros e imprima o
maior e o menor deles. Suponha que todos os números lidos serão positivos.

*/
