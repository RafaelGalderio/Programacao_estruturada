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
Escreva um programa que leia 10 n�meros (entre 1 e 30). Para cada n�mero lido, seu programa
dever� exibir uma linha contendo esse n�mero de asteriscos adjacentes. Por exemplo, se seu
programa ler o n�mero sete, ele dever� exibir *******.
*/
