#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necess�rio para usar setlocale
#include <string.h>

int main()
{int quant_notas, notas, contador=0, maior_nota;
char nome [40], nome_com_maior_nota [40];
setlocale(LC_ALL, "Portuguese");
printf("Exercicio 05 - Lista While\n");
printf("Informe a quantidade de alunos que ser�o informadas as Notas: ");
scanf("%d",&quant_notas);
printf("\n");
while (quant_notas>contador)
{
    printf("Informe a nome do aluno: \n");
    gets(nome);
    printf("Informe a Nota desse aluno:");
    scanf("%d",&notas);
    contador++;
    if(notas>maior_nota)
    {
        maior_nota=notas;
        nome_com_maior_nota[40]=nome[40];
    }
 }
 printf(" %s foi o aluno com a maior nota e a sua Nota foi %d",nome_com_maior_nota,maior_nota);
return 0;
}

/*
5) Fa�a um programa no qual o usu�rio informe o n�mero de notas a serem inseridas e ap�s leia cada uma das notas
juntamente com o nome do aluno. Ao final o programa dever� informar a maior nota juntamente com o nome do aluno que a obteve.
*/

