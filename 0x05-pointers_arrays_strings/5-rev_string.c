#include "main.h"

/**
 * rev_string - function
 * @s: Input string
 */

void rev_string(char *s)
{
	char temp;
	int cnt = 0, ind;

	while (s[cnt] != '\0')
		cnt++;

	for (ind = 0; ind < cnt; ind++)
	{
		cnt--;
		temp = s[ind];
		s[ind] = s[cnt];
		s[cnt] = temp;
	}
}
