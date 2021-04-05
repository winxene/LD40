#include <stdio.h>
#include <iostream>
int main() {
    int f = 10;
    int sum = f +7;
    int d = f - 3;
    int x = f * 3;
    int a = f / 3;
    float k =  f / 3;
    float m = f / 3.0;
    double n = f / 3.0;
    printf("m: %f\n", m);
    printf("n: %.20lf\n", n);
    std::cout << "c++ m: " << m << "\n";
    std::cout << "c++ n: " << n << "\n";

    int remainder = 14 % 2; 

    return 0;
}