#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale

int main()
{int numero, fatorial=1, contador=1;
printf("Exercicio 07 - Lista While\n",setlocale(LC_ALL,""));
printf ("Informe um valor qualquer inteiro e positivo: \n");
scanf("%d",&numero);
while (numero>=contador)
{
    fatorial=fatorial*contador;
    contador++;
}

    printf("\tO fatorial de %d é %d",numero,fatorial);
    return 0;
}

/*
Faça um programa que calcule o fatorial de um número N inteiro.
*/

