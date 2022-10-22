#include <main.h>

/**
 * _isupper - Check if a letter is in uppercase
 * @c: check char
 *
 * Return: 1 for upper letter or 0 for others
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
