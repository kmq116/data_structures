#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int a[5] = {1, 2, 3, 4, 5};

  int len;
  printf("请输入数组长度 :");
  scanf("%d", &len);
  // 动态申请内存  初始化 len 长度的数组指针
  int *pArr = (int *)malloc(sizeof(int) * len);
  *pArr = 10;

  for (int i = 0; i < len; i++)
    scanf("%d", &pArr[i]);

  for (int i = 0; i < len; i++)
    printf("%d\n", pArr[i]);

  printf("%d\n", *pArr);
  printf("%d\n", pArr[0]);
  pArr[1] = 20;
  printf("%d\n", pArr[1]);
  free(pArr);
  printf("%d\n", pArr[0]);
  return 0;
}