#include <stdio.h>

int main(void)
{
  int a[10] = {1, 2, 3, 4, 5};
  printf("%d\n", a);     // 等于 &a[0]
  printf("%d\n", &a[0]); // 取地址符号 结果为地址
  printf("%d\n", a + 1); // 等于 &a[1] 相当于 找到 a 连续的下一个内存地址
  printf("%d\n", a[0]);  //取第一个元素的值
  printf("%d\n", *a);    //取第一个元素的值 a[0]
  return 0;
}