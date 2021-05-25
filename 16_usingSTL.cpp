/// STL Standard Template Library
#include <iostream>
#include <stack>
#include <vector>
#include <string.h>

struct Mhs {
    char nim[11];
    std::string nama;
    Mhs(const char* _nim, const char* _name)
    {
        strcpy(nim, _nim);
        nama = _name;
    }
};

int main()
{
    std::stack<int> stInt;
    std::stack<float> stFloat;
    std::stack<Mhs> stMhs;
    std::vector<int> vInt;
    std::vector<Mhs> vMhs;

    vInt.push_back(1);
    vInt.push_back(2);
    vInt[0] = 10;

    stInt.push(1);
    stInt.push(2);
    stInt.push(3);

    stFloat.push(0.123f);
    stFloat.push(10.23f);
    stFloat.push(3.143f);

    Mhs m={"007", "Budi"};
    stMhs.push(m);
    stMhs.push(Mhs("008", "Andi"));

    stMhs.top().nama="coba ubah";
    Mhs mhs = stMhs.top();
    stMhs.pop();
}