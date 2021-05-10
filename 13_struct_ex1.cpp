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
        printf("Nama      : "); scanf("%s", arrStudents[i].nama);
        printf("Street    : "); scanf("%s", arrStudents[i].addr.street);
        printf("No        : "); scanf("%d", &arrStudents[i].addr.no);
        printf("City      : "); scanf("%s", arrStudents[i].addr.city);
        printf("Province  : "); scanf("%s", arrStudents[i].addr.province);
        printf("PlaceOfBirht: "); scanf("%s", arrStudents[i].placeOfBirth);
        printf("DOB-Date    : "); scanf("%d", &arrStudents[i].dob.date);
        printf("DOB-Month   : "); scanf("%d", &arrStudents[i].dob.month);
        printf("DOB-Year    : "); scanf("%d", &arrStudents[i].dob.year);
    }
}