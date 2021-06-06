#include <stdio.h>
int main() 
{
    char str1[25] = "Hello, World!"; 
    char str2[25];  //Character array
    
    printf("%s \n",str1); //Printing it on console
    scanf("%[^\n]%*c",&str2); //Getting input from the user
    printf("%s",str2); 
    
    return 0;
}
