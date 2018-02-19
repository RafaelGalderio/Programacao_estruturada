//Exercício de Cadastro
//Rafael De Luca

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define maximo 2

int    opcao=0;
int    i;
//menu


void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Instituto Federal do Rio Grande do Sul\n");
    printf("Autor: Rafael De Luca\n\n");
    menu();
    }
void menu(){
    printf ("Quantidade máxima de registro: %d\n",maximo);
    printf ("-------------------------------\n");
    printf ("Escolha uma opção: \n\n");
    printf ("1 - CADASTRAR CLIENTE\n");
    printf ("2 - BUSCAR CLIENTE\n");
    printf ("3 - LISTAR CLIENTE\n");
    printf ("4 - EXCLUIR CLIENTE\n");
    printf ("5 - SAIR\n");

    scanf("%d", &opcao);
    switch (opcao){
        case 1:
        menu();
        break;
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
