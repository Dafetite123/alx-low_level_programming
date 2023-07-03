#include <stdio.h>

int main(void)
{
  int n = 66;
  int k = 27;
  int g;
  int h;
  int *p;

  p = &n;

  putchar('\n');
  printf("initial value of n = %d and at %p\n", n, &n);
  putchar('\n');
  printf("initial value of k = %d and at %p\n", k, &k);
  *(p + 1) = 80;
  printf("new value of k = %d same as *(p + 1) = %d and at %p\n", k, *(p + 1), &k);
  p[1] = 52;
  printf("newest value of k = %d same as p[1] = %d and at %p\n", k, p[1], &p[1]);
  putchar('\n');
  p[2] = 17;
  p[3] = 25;
  printf("the value of g = %d same as p[2] = %d and at %p\n", g, p[2], &p[2]);
  putchar('\n');
  printf("the value of h = %d same as p[3] = %d and at %p\n", h, p[3], &p[3]);
  putchar('\n');
  printf(">>> int variable g is declared immediatly after the variable n, making it possible for n to access it right from outside its scope.\n\nNote: that this doesn't matter even if g has been initialized before n accesses it.\nHowever, this won't be the case if it was an array.\n");
  putchar('\n');
  printf(">>> Note: just because a variable is declared doesn't mean;a space is created. A space is created in memory at the instant of usage(i.e when initialzed, derefernced or its address is demanded) and destroyed after.\n\n");
  return (0);
}
