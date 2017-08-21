#include <stdio.h>
#include <stdlib.h>
int main()
{char nome_01 [30], nome_02[30];
printf ("Informe seu nome: \n");
gets (nome_01);
printf ("Informe um outro nome: \n");
gets (nome_02);
strlen (nome_01);
strlen (nome_02);
if (strlen(nome_01)==strlen(nome_02))
{
    printf ("Os nomes informados sao do mesmo tamanho.");
}
    else
    {
       printf ("O primeiro nome tem %d caracteres e o segundo nome tem %d ",strlen(nome_01),strlen(nome_02));
    }
}
/*
2) Construa um programa que leia dois nomes e diga se ambos têm o mesmo tamanho. Caso não
tenham, diga o tamanho de cada um deles.
*/
