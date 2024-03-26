#include<stdio.h>
#include<stdlib.h>

int main(){
 int x,y,z;
 //Finding the Largest Number Using If Statement
 printf("Sayilari giriniz :");
 scanf("%d %d %d",&x , &y , &z);
 if (x>y && x>z)
 {
    printf("En büyük eleman :%d\n",x);
    
 }
 else if (y>x && y>z)
 {
    printf("En büyük eleman :%d\n",y);
 }
 else if (z>x && z>y)
 {
    printf("En büyük eleman :%d\n",z);
 }
 else{
   printf("Girilen sayilar birbirine esittir.\n");
 }
 
}