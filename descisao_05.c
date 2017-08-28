#include <stdio.h>
#include <math.h>
int main()
{int numero, i,j;

printf ("Informe 10 numeros menores que 30:\n " );
for (i=0; i<10; i++)
	{scanf ("%i",&numero);

			for (j=0; j<numero; j++)
            {
                printf ("*");

            }
  printf ("\n");
	}

}

/*
Escreva um programa que leia 10 números (entre 1 e 30). Para cada número lido, seu programa
deverá exibir uma linha contendo esse número de asteriscos adjacentes. Por exemplo, se seu
programa ler o número sete, ele deverá exibir *******.
*/
