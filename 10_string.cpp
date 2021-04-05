#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[10]="Hello";
    char str2[100] = "Hello, apa kabar?";
    char str[3]= "saya baik sekali!";

    for (int i=0; str[i]!=0; i++)
        putchar(toupper(str[i]));
    printf("\n");

    for (int i=0; str2[i]!=0; i++)
        putchar(toupper(str2[i]));
    printf("\n");

}