#include <stdio.h>

/**
 * cap_string - function
 * @ch: char low
 * Return: char up
 */
char assignCh (char cha);
char condition (int j, char *c);
char *cap_string(char *ch)
{
	int i = 0;
	/* char con; */

	while (ch[i])
	{
		ch[i] = condition (i, ch);
		/* ch[i] = con; */
		i++;
	}

	return (ch);
}

/**
 * condition - this function checks the condition
 * @cha: input
 * @j: index
 * Return: int
 */
char condition (int j, char *c)
{
	char cRet = c[j], cIn;

	if (c[j] == ',' || c[j] == ';' || c[j] == '.' || c[j] == '!'
		|| c[j] == '?' || c[j] == '"' || c[j] == '(' ||
		c[j] == ')' || c[j] == '{' || c[j] == '}' ||
		c[j] == ' ' || c[j] == '\n' || c[j] == '\t')
	{
		j += 1;
		cIn = c[j];
		cRet = assignCh (cIn);
	}

	return (cRet);
}

/**
 * assignCh - this function checks and converts to uppercase
 * @cha: input
 * @j: index
 * Return: int
 */
char assignCh (char cha)
{
	if (cha >= 'a' && cha <= 'z')
	{
		cha -= 32;
	}

	return (cha);
}
