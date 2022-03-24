#include "main.h"

/**
 * leet - string encoder
 * @a: string to be encoded
 *
 * Description: Encodes a string with numbers
 *
 * Return: pointer to the encoded string
 */
char *leet(char *a)
{
	int i = 0, j = 0;
	char numbers[] = {'4', '3', '0', '7', '1'};
	char capsLetter[] = {'A', 'E', 'O', 'T', 'L'};
	char smallLetters[] = {'a', 'e', 'o', 't', 'l'};

	while (a[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == capsLetter[j] || a[i] == smallLetters[j])
			{
				a[i] = numbers[j];
			}
		}
		i++;
	}

	return (a);
}
