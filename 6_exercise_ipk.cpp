#include <iostream>

int main()
{
    // and: &&
    // or: ||
    // is not equal: !=
    // is equal: ==
    float ipk;
    std::cout << "IPK: "; std::cin>>ipk;
    if (ipk>=0 && ipk<=4.0)
    {
        if (ipk>=3.5)_
            std::cout << "Cumlaude\n";
        else
        if (ipk>=3.0)
            std::cout << "Outstanding\n";
        else
        if (ipk>=2.5)
            std::cout << "Very Good\n";
        else
        if (ipk>=2.0)
            std::cout << "Good\n";
        else
            std::cout << "Poor\n";
    }
    else
    {
       std::cout << "IPK incorrect\n";
    }
}