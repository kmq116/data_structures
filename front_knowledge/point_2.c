#include <stdio.h>

// 如果接收的参数是地址，会影响到原来的值 如果值接收一个变量，则值对其值进行操作
void f(int *i)
{
  *i = 100;
  printf("%d\n", *i);
}

int main(void)
{
  int i = 10;
  // 传参方式和函数内内部执行会决定 i 的值是什么
  f(&i);
  printf("%d\n", i);
  return 0;
}