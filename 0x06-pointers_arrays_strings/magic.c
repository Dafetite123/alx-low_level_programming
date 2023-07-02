#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 0) = 44;
  *(p + 3) = 39;
  *(p + 4) = 98;
  *(p + 5) = 73;
  *(p + 6) = 11;
  *(p + 7) = 56;
  putchar('\n');
  printf("Pointer is at %p\n", p);
  printf("pointer *(p + 0) is at %p\n", &*(p + 0));
  putchar('\n');
  printf("pointer *(p + 3) is at %p\n", &*(p + 3));
  printf("Pointer *(p + 4) is at %p\n", &*(p + 4));
  printf("pointer *(p + 5) is at %p\n", &*(p + 5));
  printf("pointer *(p + 6) is at %p\n", &*(p + 6));
  printf("pointer *(p + 7) is at %p\n", &*(p + 7));
  putchar('\n');
  printf("n = %d and at %p\n", n, &n);
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
