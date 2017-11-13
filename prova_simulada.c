#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func(int *x, int y, int z){

if (y>z)
    return;
else {
    if (x[y]>10)
        return (x[y]+func(x,y+1,z));
    else if (x[y]>5){
        x[y] = x[y] + 10;
        return ( func (x,y+1,z));
        }
     else
       return 0;
    }

}


int main(){
int m[] = {2,6,12,4,11,6,8,2,14,9,10};
int r,i;
r = func (m,2,9);
printf ("r= %d\n",r);
for (i=0; i<11; i++)
{
printf("[");
printf ("%d",m[i]);
printf("]");
}

}
