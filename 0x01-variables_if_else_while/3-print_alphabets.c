#include <stdio.h>
#include <stdlib.h>
/*more headers go there*/

/**
 * main - main block
 * Description: prins aplhabet in lwoer case, then in upper case, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	char c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
