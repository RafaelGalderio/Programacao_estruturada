#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necess�rio para usar setlocale

int main()
{int numero, fatorial=1;
printf("Exercicio 07 - Lista While\n",setlocale(LC_ALL,""));
printf ("Informe um valor qualquer inteiro e positivo: \n");
scanf("%d",&numero);
while (numero!=1)
{
    fatorial=fatorial*numero;
    numero--;
}

    printf("\tO fatorial do numero informado � %d:",fatorial);
    return 0;
}

/*
Fa�a um programa que calcule o fatorial de um n�mero N inteiro.
*/

