#include "holberton.h"
/**
  *string_toupper - func
  * @s: parame
  *Return: char
  */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
