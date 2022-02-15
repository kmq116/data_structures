#include <stdio.h>

int main(void)
{
  int *p; // 指针变量 只能存储 int 类型的地址
  int i = 10;
  int j;
  p = &i;
  j = *p;
  printf("%d\n", j);
  return 0;
}