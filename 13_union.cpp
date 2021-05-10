# include <stdio.h>
typedef unsigned char uchar;
union ByteBits{
    uchar byte;
    struct {
        uchar bit0:1;
        unsigned char bit1:1;
        unsigned char bit2:1;
        unsigned char bit3:1;
        unsigned char bit4:1;
        unsigned char bit5:1;
        unsigned char bit6:1;
        unsigned char bit7:1;
    } bits;
};

int testUnion() {
  union tbil{
    unsigned int di;
    unsigned char dc[4];
  } bil_x; 

  bil_x.di = 0x12345678;
  printf("sizeof of union: %d\n", sizeof(bil_x));
  printf("di    = %d \n", bil_x.di); // 1*256 + 65 = 321
  printf("dc[0] = %d \n", bil_x.dc[0]);
  printf("dc[1] = %d\n",  bil_x.dc[1]);
} 

int testByteBits()
{
    ByteBits b;
    b.byte = 'A'; // A:0x41, a: 0x61
    b.byte |= 0x20;
    b.byte &= 0xDF; // 0xFE: 1101 1111
    b.bits.bit5 = 1;
    b.bits.bit5 = 0;
}

int main()
{
    testByteBits();
}