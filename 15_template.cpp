#include "iostream"
#include <stdio.h>
/*
void swap(int& a, int& b)
{
    int temp =a;
    a = b;
    b = temp;
}

void swap(float& a, float& b)
{
    float temp =a;
    a = b;
    b = temp;
}
*/

template <class T>
void swap(T& a, T& b)
{
    T temp =a;
    a = b;
    b = temp;
}

void print(char ch);
void print(const char* s);

int main()
{
    // print('A');
    // print("Hello");
    int ix=100;
    int iy=50;
    float a=10;
    float b=5;
    printf("Initial   : ix: %d ix:%d\n", ix, iy);
    printf("Initial   : a: %.2f b:%.2f\n", a, b);
    swap(a,b);
    swap(ix, iy);
    // printf("after swap: a: %d b:%d\n", a, b);
    printf("after swap: a: %.2f b:%.2f\n", a, b);
    printf("after swap: ix: %d ix:%d\n", ix, iy);
    return 0;
}

void print(char ch)
{
    printf("char : %c\n", ch);
}

void print(const char* s)
{
    printf("String: %s\n", s);
}