int main()
{
 char nome [40];
 int idade;
 printf ("Digite o nome: \n");
 gets(nome);
 printf ("Digite a idade: \n");
 scanf ("%i", &idade);
 printf (" Nome: %s \n Idade: %i\n", nome, idade);
 getch(); //Finaliza a execução lendo qualquer tecla
 return 0;
}
