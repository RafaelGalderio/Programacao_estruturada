#include<stdio.h>
int quadrado(int num); //Protótipo da função
int main(){
 int n;
printf("Digite o numero: ");
scanf("%d",&n);
printf("\nO valor do quadrado desse numero eh: %d \n",quadrado(n)); //Chamada da função dentro
 //da função printf
system("pause");
 return 0;
}
int quadrado(int num) //Definição da função quadrado
{
 return num * num;
}

