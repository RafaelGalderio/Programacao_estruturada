#include<stdio.h>
int quadrado(int *ptr_n); //Protótipo da função
int main(){
 int n;
printf("Digite o numero: ");
scanf("%d",&n);
printf("\n%d ",quadrado(&n)); //Chamada de função
 //passando o endereço de n
system("pause");
 return 0;
}
int quadrado(int *ptr_n) //Definição da função quadrado
{
 return *ptr_n * *ptr_n;
}
