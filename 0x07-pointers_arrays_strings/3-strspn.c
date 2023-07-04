#include <stdio.h>

/**
 * _strspn - function
 * @s: ptr
 * @accept: char
 * Return: u-int
 */

unsigned int _strspn(char *s, char *accept)
{
	int index, acc;
	unsigned int i = 0;

	for (acc = 0 ; accept[acc] != '\0' ; acc++)
	{
		/* printf("print for the letter %c\n", accept[acc]); */
		for (index = 0 ; s[index] != '\0' ; index++)
		{
			if (s[index] == accept[acc])
			{
				/* printf("yes it exist %c\n", s[index]); */
				i++;
				break;
			}
		}
		/* putchar('\n'); */
	}
	return (i);
}
