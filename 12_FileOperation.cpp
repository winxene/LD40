#include <stdio.h>

void testWriteString(FILE* stream)
{
    char str[] = "Hello World 2!\n";

    for (int i=0; str[i]!=0; i++)
        putc(str[i], stream);
    fputs(str, stream);
    fprintf(stream, "Ini mencetak str: %s", str);
}

int testWriteFile(const char* filename)
{
    FILE* f = fopen(filename, "a");
    if (f==NULL)
    {
        perror("Error");
        return 0;
    }
    testWriteString(f);
    fclose(f);
}

void readFile_getc(FILE* stream)
{
    do {
        char ch = fgetc(stream);
        if (ch==EOF)
            break;
        else    
            putchar(ch);
    } while (1);
}

void readFile_fgets(FILE* stream)
{
    char str[101];
    while (fgets(str, 100, stream)!=NULL)
        printf(str);
}

void testReadFile(const char* filename)
{
    FILE* f = fopen(filename, "r");
    if (f==NULL)
    {
        perror("Error");
        return ;
    }
    // read file contents
    // readFile_getc(f);
    readFile_fgets(f);
    fclose(f);
}

void testfprintf(const char* filename)
{
    FILE* f = fopen(filename, "w");
    if (f==NULL)
    {
        perror("Error");
        return ;
    }
    fprintf(f, "TestData: %d %s %4.2f", 10, "Andi", 3.14f);
    fclose(f);
}

void testfscanf(const char* filename)
{
    FILE* f = fopen(filename, "r");
    if (f==NULL)
    {
        perror("Error");
        return ;
    }
    char s1[81];
    int n;
    char nama[81]; 
    float pi;
    fscanf(f, "%s %d %s %f", s1, &n, nama, &pi);
    fclose(f);
}

struct Student
{
    char nim[11];
    char nama[81];
    float ipk;
};

void testWriteStruct(const char* filename)
{
    Student andi = {"001", "Andi", 3.99};
    FILE* f = fopen(filename, "wb");
    if (f==NULL)
    {
        perror("Error");
        return ;
    }
    fwrite(&andi, sizeof(andi), 1, f);
    fclose(f);

}

void testReadStruct(const char* filename)
{
    Student andi;
    FILE* f = fopen(filename, "rb");
    if (f==NULL)
    {
        perror("Error");
        return ;
    }
    fread(&andi, sizeof(andi), 1, f);
    fclose(f);

}

int main()
{
//    testWriteFile("X:/test.txt");
    // testReadFile("X:/test.txt");
    // testfprintf("X:/testprintf.txt");
    // testfscanf("X:/testprintf.txt");
    // testWriteStruct("X:/mhs.dat");
    testReadStruct("X:/mhs.dat");
}
