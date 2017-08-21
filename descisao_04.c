#include <stdio.h>
#include <stdlib.h>
int main()
{char nome[30], sexo[30];
printf ("Informe o seu nome: \n");
gets(nome);
printf ("Informe o seu sexo: \n");
gets(sexo);
if (sexo==masculino)
{
    printf("Bom dia Sr. %d",nome);
    if else (sexo==feminino)
    {
        printf("Bom dia Sra. %d",nome);
    }
}
    else
    {
        printf ("Voce informou um sexo nao cadastrado.\n")
    }
}

/*
3) Construa um programa que leia o nome e o sexo de uma pessoa e construa e apresente uma
string com o texto “BOM DIA SR. <NOME>” caso o sexo seja masculinho, e “BOM DIA SRA.
<NOME>” caso o sexo seja feminino.
*/
