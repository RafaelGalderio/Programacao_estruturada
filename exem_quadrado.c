#include<stdio.h>
int quadrado(int num); //Prot�tipo da fun��o
int main(){
 int n;
printf("Digite o numero: ");
scanf("%d",&n);
printf("\nO valor do quadrado desse numero eh: %d \n",quadrado(n)); //Chamada da fun��o dentro
 //da fun��o printf
system("pause");
 return 0;
}
int quadrado(int num) //Defini��o da fun��o quadrado
{
 return num * num;
}

