#include "main.h"
/**
* _isupper - checks if alpha is low case
* Return: 1 if lowercase 0 if else
* @c: the given character
**/
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
