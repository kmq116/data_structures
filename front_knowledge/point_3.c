#include <stdio.h>
#include <stdbool.h>
void showArray(int *p, int len)
{
  p[0] = 2;
}

int main(void)
{
  int a[10] = {1, 2, 3, 4, 5};
  printf("%d\n", a);
  printf("%d\n", a + 1);
  printf("%d\n", &a[1]);
  // 一维数组名指向第一个元素的地址
  bool b = a[3] == *(a + 3);
  // 例如
  printf("%d\n", b);
  showArray(a, 10);
  printf("%d\n", a[0]);
  return 0;
}