#include "main.h"

/**
*_islower - Entry point
*Description:Write a function that checks is a character is lowercase
*Return: 1 if true. 0 if false.
*Return 0 if otherwise
*/
int _islower(int c)
	{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
	/* refer to int c*/
	if (c == i)
	{
	return (1);
	}
	}
	return (0);
	}


