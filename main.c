//Exercício de Cadastro
//Rafael De Luca

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define maximo 10

int    opcao=0;
int    i;
//menu


void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Instituto Federal do Rio Grande do Sul\n");
    printf("Autor: Rafael De Luca\n\n");
    menu();
    }

void limpa_tela(){
        system("cls");
    }
void menu(){
    printf ("Quantidade maxima de registro: %d\n",maximo);
    printf ("-------------------------------\n");
    printf ("Escolha uma opcaoo: \n\n");
    printf ("1 - CADASTRAR CLIENTE\n");
    printf ("2 - BUSCAR CLIENTE\n");
    printf ("3 - LISTAR CLIENTE\n");
    printf ("4 - EXCLUIR CLIENTE\n");
    printf ("5 - SAIR\n\n");

    scanf("%d", &opcao);
    switch (opcao){
        case 1:
            limpa_tela();
            menu();
        break;

        case 2:
            limpa_tela();
            menu();
        break;

        case 3:
            limpa_tela();
            menu();
        break;

        case 4:
            limpa_tela();
            menu();
        break;

        case 5:
            limpa_tela();
            menu();
        break;

        default:
            limpa_tela();
            printf("Voce escolheu uma opcao invalida, escolha um valida (1-5)\n\n");
            menu();

    }
}


/* Enunciado exercício
CADASTRAR CLIENTE
BUSCAR CLIENTE
LISTAR CLIENTES
EXCLUIR CLIENTE
 Nome;
 Sexo;
 Data de nascimento;
 Idade;
 Doenças importantes;
 Não devem ser utilizadas variáveis globais.
 Todas as informações necessárias pelas funções devem ser passadas como parâmetro.
 O usuário deverá poder utilizar seu programa, solicitando as opções tantas vezes quanto ele deseje e em qualquer ordem.
 Limite o número de cadastro de pacientes a 10. Após ocupados os 10 espaços para cadastro, seu programa não deve aceitar
novas inserções, a menos que algum cadastro seja excluído.
*/

