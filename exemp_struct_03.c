#include <stdio.h>

 struct data {
    float nota_01, nota_02, nota_03, media;
    char nome[20];
 };

 int main()
 {
     struct data i_data[10];
     int x;
     for(x=0; x<10; x++)
     {   printf ("Digite um nome:\n");
         scanf ("%s",&i_data[x].nome);
         printf ("Digite 3 notas:\n");
         scanf("%f %f %f",&i_data[x].nota_01,&i_data[x].nota_02,&i_data[x].nota_03);
         i_data[x].media= ((i_data[x].nota_01 + i_data[x].nota_02 + i_data[x].nota_03)/3);
     }
     for(x=0; x<10; x++)
     {
        printf("\nO(A) aluno(a) %s tirou as notas %.2f,.%.2f,%.2f e ficou com media %.2f",i_data[x].nome,i_data[x].nota_01,i_data[x].nota_02,i_data[x].nota_03,i_data[x].media);
     }
 }



/*
1 – Crie uma estrutura que armazene os seguintes dados de um aluno: nome,
nota 1, nota 2, nota 3, média. Escreva um programa que utilize esta estrutura
para armazenar os dados de 10 alunos de uma classe. O programa deve ler o
nome e as três notas de cada aluno e, após, calcular a média. Ao final, todos
os dados de todos os alunos da classe deverão ser apresentados na tela.
*/




