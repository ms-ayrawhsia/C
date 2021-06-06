#include <stdio.h>
int main() 
{
    char str[100];  //Character array
    scanf("%[^\n]%*c",&str); //Getting input from the user
    printf("%s",str); //Printing it on console
    return 0;
}
