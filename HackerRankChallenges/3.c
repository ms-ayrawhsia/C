#include<stdio.h>
 int main() {
 int a,b;
 float c,d;
 scanf("%d %d \n%f %f",&a,&b,&c,&d);
 printf("%d %d \n%0.1f %0.1f",a+b,a-b,c+d,c-d);
 return 0;
 }
