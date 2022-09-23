#include "main.h"

/**
 * leet - encodes astring into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	unsigned int i;

	char *s = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1}

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(cha) i++)
		{
			/*32 is the diffrence betwwen lowecase letters and uppercase letters*/

			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}

		}
		c++
	}
	return (s);
}
