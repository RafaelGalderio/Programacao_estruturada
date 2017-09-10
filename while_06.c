#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale
#include <string.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float salario, soma_sal=0.0, contador=0.0, media_sal, media_filho, soma_filho=0,filhos, maior_sal=0.0, per_maior_800 ,contador_800=0;

printf("Exercio 06 - While\n");
printf("Informe um valor de salario negativo para encerrar o programa:\n");
printf ("Informe seu salario mensal em reais: ");
scanf("%f",&salario);
    while (salario>=0)
    {
    contador++;
    printf ("Informe a quantidade de filhos que tu tens: ");
    scanf("%f",&filhos);
    soma_filho=soma_filho+filhos;
    soma_sal=soma_sal+salario;
    media_sal=(soma_sal)/contador;
    media_filho=(soma_filho)/contador;
    if (salario>maior_sal)
        {
           maior_sal=salario;
        }
    if (salario>800)
        {
           contador_800++;
        }
    per_maior_800 = (contador_800) /(contador)*100;
    printf ("Informe seu salário mensal em reais: ");
    scanf("%f",&salario);

    }


printf ("\nO valor da média de filhos é: %.2f",media_filho);
printf ("\nO valor da média salarial é R$: %.2f",media_sal);
printf ("\nO valor do maior salario é R$: %.2f",maior_sal);
printf ("\nO percentual de pessoas que ganham acima de R$ 800,00 e: %.2f%%",per_maior_800);

return 0;
}

/*
6) A prefeitura de uma cidade fez uma pesquisa entre os habitantes, coletando dados sobre salário e número de filhos. A prefeitura deseja saber:
 média salarial da população;
 média de filhos;
 maior salário;
 percentual de pessoas com salário até R$800,00.
O final da leitura de dados se dará com a entrada de um salário negativo.

printf ("\nO numero de vezes que ao algotimo entrou no laço de repetição é: %.2f",contador);
printf ("\nO valor da soma da filhos é: %.2f",soma_filho);
printf ("\nO valor da soma dos salarios é: %.2f",soma_sal);
printf ("\nA quantidade de pessoas que ganha acima de R$ 800 e: %.0f",contador_800);
*/

