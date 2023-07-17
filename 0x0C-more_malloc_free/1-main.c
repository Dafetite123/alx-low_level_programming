#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat, *a, *b, *c, *d, *e, *f;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    a = string_nconcat("Best ", "School", 4);
    printf("%s\n", a);
    b = string_nconcat("", "Hello1", 12);
    printf("%s\n", b);
    c = string_nconcat("Hello2", "", 12);
    printf("%s\n", c);
    d = string_nconcat("Hello3", NULL, 12);
    printf("%s\n", d);
    e = string_nconcat(NULL, "Hello4", 0);
    printf("%s\n", e);
    f = string_nconcat(NULL, NULL, 10);
    printf("%s\n", f);
    free(concat);
    free(a);
    free(b);
    free(c);
    free(d);
    free(e);
    free(f);
    return (0);
}
