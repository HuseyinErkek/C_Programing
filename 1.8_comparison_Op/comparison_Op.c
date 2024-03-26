#include<stdio.h>
#include<stdlib.h>

int main(){
int x,y,z;
x=25;
y=25;
z=20;

printf("X: %d Y: %d Z: %d\n",x,y,z);
printf("X ve Y esit mi ? %d\n",x==y);
printf("Y ve Z esit mi ? %d\n",y==z);
printf("Y ve Z esit degil mi ? %d\n",y!=z);
printf("X ve Y esit degil mi ? %d\n",x!=y);
printf("X Y'den büyük mü? %d\n",x>y);
return 0;

}