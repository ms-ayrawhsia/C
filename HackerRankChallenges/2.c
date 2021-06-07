#include<stdio.h>
 int main() {
     
     char ch;     //C
     char s[25];  //Language
     char sen[50];  //Welcome To C!!
     
     scanf("%c \n",&ch);
     scanf("%[^\n]%*c", &s);
     scanf("%[^\n]%*c", &sen);
     printf("%c \n",ch);
     printf("%s \n",s);
     printf("%s",sen);
 
 return 0;
}
