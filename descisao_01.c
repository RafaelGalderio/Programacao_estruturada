#include <stdio.h>
#include <stdlib.h>

int main ()
{
char nome[30];
printf ("Informe seu nome: \n");
gets (nome);
strlen (nome);
if (strlen(nome)<10)
{
	printf("Seu nome tem %d caracteres, Seu nome e Curto!\n", strlen(nome));
}
else
{
	printf ("Seu nome tem %d caracteres, Seu nome NAO e Curto!\n",strlen(nome) );
}

}
