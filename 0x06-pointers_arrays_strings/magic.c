#include <stdio.h>

int main(void)
{
  int n = 66;
  int g;
  int a[5];
  int *p;

  p = &n;

  putchar('\n');
  printf(">>> int variable g is declared between variable n and array a. However, soon as its address is printed or it's initialized with a value the program crashes. Hence, nothing must come between variable n and array a so that the pointer pointing to n can leave its scope and access the array a.\n");
  putchar('\n');
  printf(">>> Note: just because a variable is declared doesn't mean;a space is created. A space is created in memory at the instant of usage(i.e when initialzed, derefernced or its address is demanded) and destroyed after.\n");
  putchar('\n');
  printf(">>> We cannot initialize or demand the addresses of the spaces *(p + 1) and *(p + 2) because they are part of the variable n's scope(4bytes). This would cause this program to crash as well.\n");
  *(p + 0) = 44;
  *(p + 3) = 39;
  *(p + 4) = 98;
  *(p + 5) = 73;
  *(p + 6) = 11;
  *(p + 7) = 56;
  putchar('\n');
  printf("initial value of n = %d and at %p\n", n, &n);
  //printf("g is at %p\n", &g);
  putchar('\n');
  printf("Pointer(p = &n) is at %p\n", p);
  printf("pointer *(p + 0) is at %p\n", &*(p + 0));
  putchar('\n');
  printf("pointer *(p + 1) is at %p\n", &*(p + 1));
  printf("pointer *(p + 2) is at %p\n", &*(p + 2));
  putchar('\n');
  printf("Arr[0] pointer *(p + 3) is at %p\n", &*(p + 3));
  printf("Arr[1] Pointer *(p + 4) is at %p\n", &*(p + 4));
  printf("Arr[2] pointer *(p + 5) is at %p\n", &*(p + 5));
  printf("Arr[3] pointer *(p + 6) is at %p\n", &*(p + 6));
  printf("Arr[4] pointer *(p + 7) is at %p\n", &*(p + 7));
  putchar('\n');
  //printf("n = %d and at %p\n", n, &n);
  putchar('\n');
  printf("a[0] = %d and at %p\n", a[0], &a[0]);
  printf("a[1] = %d and at %p\n", a[1], &a[1]);
  printf("a[2] = %d and at %p\n", a[2], &a[2]);
  printf("a[3] = %d and at %p\n", a[3], &a[3]);
  printf("a[4] = %d and at %p\n", a[4], &a[4]);
  /* ...so that this prints 98\n */
  //printf("a[2] = %d\n", a[2]);
  return (0);
}
