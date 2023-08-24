#include "main.h"
/**
 * cap_string - input function
 * @s: input string
 *
 * Return: the output string
 */
char *cap_string(char *s)
{
	int k, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (k = 0; s[k] != '\0'; k++)
	{
		if (k == 0 && s[k] >= 'a' && s[k] <= 'z')
			s[k] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[k] == spe[j])
			{
				if (s[k + 1] >= 'a' && s[k + 1] <= 'z')
				{
					s[k + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
