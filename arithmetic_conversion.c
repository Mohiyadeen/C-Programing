#include<stdio.h>

void main()
{
	unsigned int i = 0x44444;
	int j = 0x44444;
	short sh = 0x8080;
	for( ; i>sh ; i--); /* sh is converted to unsigned int  hence resulting in bigger value due to signed extention 
				, condition fails first time*/ 
	printf("%x\n", i);
	for( ; j>sh ; j--); // sh is converted to signed int , hence j decreaments till reaching 0xffff8080
	printf("%x\n", j);

}
