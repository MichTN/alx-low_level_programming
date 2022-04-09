# include <stdio.h>
#include <stdlib>
/*more headers go there*/

/**
 * main - main block
 * Description: printing the alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}

	putchar ('\n');
	return (0);
}
