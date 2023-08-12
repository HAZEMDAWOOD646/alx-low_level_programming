#include<stdio.h>
/**
*main - Entery point
*Description: print values of n statues:
*greater than, is zero and is not less than 6
*Return: 0 (success)
*/

int main(void)
{
	char vh = 'z';

	while (vh >= 'a')
	{
		putchar(vh);
		vh--;
	}
	putchar('\n');

	return (0);
}
