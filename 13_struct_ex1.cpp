#include <stdio.h>

struct Address{
    char street[101];
    int no;
    char city[51];
    char province[81];
};
/*
struct Dob {
    int date;
    int month;
    int year;
};

struct Student
{
    char nim[11]; // 10 digit 9 440 000 000
    char nama[101];    
    struct Address addr;
    char placeOfBirth[51];
    Dob dob;
};
*/

struct Student
{
    char nim[11]; // 10 digit 9 440 000 000
    char nama[101];    
    struct Address addr;
    char placeOfBirth[51];
    struct {
        int date;
        int month;
        int year;
    } dob;
};

int main()
{
    Student arrStudents[5];

    for (int i=0; i<5; i++)
    {
        printf("Nim       : "); scanf("%s", arrStudents[i].nim);
        printf("Nama      : "); scanf("%s", andi.nama);
        printf("Street    : "); scanf("%s", andi.addr.street);
        printf("No        : "); scanf("%d", &andi.addr.no);
        printf("City      : "); scanf("%s", andi.addr.city);
        printf("Province  : "); scanf("%s", andi.addr.province);
        printf("PlaceOfBirht: "); scanf("%s", andi.placeOfBirth);
        printf("DOB-Date    : "); scanf("%d", &andi.dob.date);
        printf("DOB-Month   : "); scanf("%d", &andi.dob.month);
        printf("DOB-Year    : "); scanf("%d", &andi.dob.year);
    }
}