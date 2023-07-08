#ifndef MAIN
#define MAIN

/**
 * _atoi - function
 * @s: ptr
 * Return: int
 */
int _atoi(char *s)
{
        int i, j, k = 0, t = 10, res = 0, m = 1;

        while (s[k])
                k++;

        /* printf("k = %d\n", k); */

        /* printf(" >%d< ", m); */

        for (i = 0 ; i < k ; i++)
        {
                if (s[i] == '-')
                        m = -1;

                if (s[i] >= '0' && s[i] <= '9')
                {
                        j = s[i] - '0';
                        res = res * t + j;
                        /* res *= t; */
                        /* res += j; */
                }
        }
        res *= m;
        return (res);
}

#endif
