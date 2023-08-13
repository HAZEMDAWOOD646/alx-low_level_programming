#include<stdio.h>
/**
*main - Entery point
*Description: print values of n statues:
*greater than, is zero and is not less than 6
*Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	putchar(digit + 49);

	if (digit != 9)
	{
		putchar(',');
		putchar(' ');
	}
	digit++;
	}
	putchar('\n');

	return (0);

}
