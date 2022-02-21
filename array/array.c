#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Arr
{
  int *pBase;      //第一个元素地址
  int len;         //数组长度
  int cnt;         //元素个数
  int increasment; //自增
};

// 初始化数组
void init(struct Arr *p, int len)
{
  p->pBase = (int *)malloc(sizeof(int) * p->len);
  // 内存不够的校验
  if (NULL == p->pBase)
  {
    printf("malloc error\n");
    exit(-1); // 终止整个程序
  }
  else
  {
    p->len = len;
    p->cnt = 0;
  }
  return;
}

bool append()
{
  return true;
}

bool insert()
{
  return true;
}

bool delete ()
{
  return true;
}

int get()
{
  return true;
}

bool isEmpty(struct Arr *p)
{
  if (p->cnt == 0)
    return true;
  else
    return false;
}

bool isFull()
{
}

void sort()
{
}

void show(struct Arr *p)
{
  if (isEmpty(p))
  {
    printf("empty\n");
    return;
  }
  else
  {
    for (int i = 0; i < p->cnt; i++)
    {
      printf("%d\n", p->pBase[i]);
    }
  }
}

void reverse()
{
}

int main(void)
{
  struct Arr arr;
  init(&arr, 99);
  printf("%d\n", arr.len);
  show(&arr);
  return 0;
}
