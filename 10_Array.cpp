#include <stdio.h>

int main()
{
 /*   int arr[10] = {0};
    int *ptr_arr;
    ptr_arr = arr;

    ptr_arr[0] = 10;
    *(ptr_arr+1) = 20;
    arr[1] = 100;
    *(ptr_arr+2) = 200;
    arr[2] = 2000;
    *(arr+2) = 202;
    */
    int i;
    int list_int[10];
    for (i=0; i<10; i++){
        list_int[i] = i + 1;
        printf( "list_int[%d] init with %d.\n", i, list_int[i]);
    }
}