#include <stdio.h>
#include <ctype.h>


// str: read only
void toUpper(const char str[])
{
    for (int i=0; str[i]!=0; i++)
        putchar(toupper(str[i]));
    printf("\n");
}

// argument as input/output -> reference argument/passing by refence
void toUpperString(char str[])
{
    for (int i=0; str[i]!=0; i++)
        str[i] =toupper(str[i]);
}

int main()
{
    char str[10]="Hello";
    char str2[100] = "Hello, apa kabar?";
    char str3[30]= "saya baik sekali!";

    toUpper(str);
    toUpperString(str);
    printf("str: %s\n", str);
    // toUpper(str2);
    // toUpper(str3);

    // for (int i=0; str[i]!=0; i++)
    //     putchar(toupper(str[i]));
    // printf("\n");

    // for (int i=0; str2[i]!=0; i++)
    //     putchar(toupper(str2[i]));
    // printf("\n");

    // for (int i=0; str3[i]!=0; i++)
    //     putchar(toupper(str3[i]));
    // printf("\n");
}