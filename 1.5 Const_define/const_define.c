#include<stdio.h>
#include<stdlib.h>

#define PI 3.14
int main(){

const int sayi = 10;
// sayi = 11; seklinde kullanamiyoruz  çünkü const değişkenler için salt okunurdur.
printf("Sayimiz : %d\n",sayi); 

//Define tanımlana deger tek bir sefer tanimlar ve her yerde kullaniriz.
printf("Define tanimladigimiz deger : %.2lf",PI);
}
