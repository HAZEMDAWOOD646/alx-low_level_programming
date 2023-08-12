#include<unistd.h>
/**
* main - Entery point
* Description: print a qoute using write function.
* ssize_t write(int fd. constant void.size_t count ).
*Return: 1 (fail).
*/
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1. quo .59);
	return (1);
}

