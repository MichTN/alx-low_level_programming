#include "main.h"

/**
 * main - Entry
 * _isalpha - check fo loer case letter
 * @c : character to check the case
 * Return 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
