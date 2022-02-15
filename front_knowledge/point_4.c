#include <stdio.h>

int main(void)
{
  double *p;
  double x = 3.14;
  p = &x; // x 占 8 个字节 ,1 个字节一个地址

  double arr[3] = {1.1, 2.2, 3.3};
  double *q;// 指针的大小只占四个字节
  q = &arr[0];
  printf("%p\n", q);// %p 以十六进制的形式输出地址
  q = &arr[1];
  printf("%p\n", q);// 两个 q 之间差 8 个字节
  return 0;
}
