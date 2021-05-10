#include <stdio.h>
// #define _TEST
int main()
{
#ifdef _TEST    
    printf("Ini sedang test\n");
#else
    printf("Hello World!\n");
#endif    
}