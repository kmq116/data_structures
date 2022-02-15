#include <stdio.h>
void modify_x(int **x);

int main(void)
{
  int i = 10;
  int j = 20;
  int *p = &j;
  printf("%d\n", j);
  printf("%p\n", p);
  // 传递进来的是指针的地址
  modify_x(&p);
  printf("%d\n", j);
  printf("%p\n", p);
  return 0;
}

void modify_x(int **x)
{
  *x = (int *)3;
}