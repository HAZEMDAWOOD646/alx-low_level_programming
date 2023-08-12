#include <stdio.h>
/**
*main - Entery point
*Description: print alphabet:
*greater than, is zero and is not less than 6
*Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);

}
