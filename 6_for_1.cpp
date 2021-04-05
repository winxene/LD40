#include <stdio.h>

int main()
{
    int i=0;
    // for(; i<0;)
    // while (i<0)
    do {
        printf("i: %d\n", i++);
    } while (i<0);
}