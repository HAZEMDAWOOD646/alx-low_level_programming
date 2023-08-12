#include <stdio.h>
/**
*main - Entery point
*Description: print values of n statues:
*greater than, is zero and is not less than 6
*Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';


	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);

}
