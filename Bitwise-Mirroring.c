#include <stdio.h>

int main()
{
 int l = 1;
 unsigned r = 0x80000000 ;
 int k;
 int n = 0xABCD1234;
 int temp = 0;
 for(k = 0; k < 16; k++ )
 {
   temp |= (n & l) ? r : 0;
   temp |= (n & r) ? l : 0;
    l <<= 1;
    r >>= 1;
 }
 printf("Normal %x", n);
 printf("\nMirrored %x", temp);
}
