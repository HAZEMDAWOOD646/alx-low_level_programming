#include<stdio.h>
/**
*main - Entery point
*Description: print values of n statues:
*greater than, is zero and is not less than 6
*Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
