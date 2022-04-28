#include "main.h"
int squareroot(int n, int i);
/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squareroot(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squareroot(n, i + 1));
}
