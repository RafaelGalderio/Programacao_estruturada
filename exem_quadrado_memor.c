#include<stdio.h>
int quadrado(int *ptr_n); //Prot�tipo da fun��o
int main(){
 int n;
printf("Digite o numero: ");
scanf("%d",&n);
printf("\n%d ",quadrado(&n)); //Chamada de fun��o
 //passando o endere�o de n
system("pause");
 return 0;
}
int quadrado(int *ptr_n) //Defini��o da fun��o quadrado
{
 return *ptr_n * *ptr_n;
}
