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

/*Another logic with more shift involved */
/*
 for(i=0;i<32/2;i++)
   {
      swap |= (((num>>i)&1) <<(31-i));
      swap |= (((num>>31-i)&1) <<(i));
   }
*/
