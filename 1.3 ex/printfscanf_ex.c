#include<stdio.h>
#include<stdlib.h>

int main(){
    char c;
    int sayi,sayi1; 
    printf("Isminiz bas harfini giriniz :");
    scanf("%c",&c);
    printf("Ilk sayiyi giriniz :\n");
    scanf("%d",&sayi);
    printf("Ikinci sayiyi giriniz :\n");
    scanf("%d",&sayi1);
    printf("Ilk sayi :%d Ikinci sayi : %d Ismin bas harfi :%c",sayi,sayi1,c);
}