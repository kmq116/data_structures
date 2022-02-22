#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Arr
{
  int *pBase;      //第一个元素地址
  int len;         //数组长度
  int cnt;         //元素个数
  int increasment; //自增
} * pArr;

typedef struct ST
{
  int name;
} * abc;

int main2(abc p)
{
  p->name = 456;
}
int main1()
{
  struct ST a;
  a.name = 123;
  abc b = &a;
  main2(&a);
  printf("%d\n", b->name);
  return 0;
}

// 初始化数组
void init(pArr p, int len)
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
// 非空判断
bool isEmpty(pArr p)
{
  if (p->cnt == 0)
    return true;
  else
    return false;
}
// 数组是否满了
bool isFull(struct Arr *p)
{
  if (p->cnt == p->len)
    return true;
  else
    return false;
}

bool append(struct Arr *p, int val)
{
  //  数组是否满了
  if (isFull(p))
  {
    return false;
  }
  else
  {
    // 改变最后一个元素
    p->pBase[p->cnt] = val;
    p->cnt++;
    return true;
  }
}

bool insert(struct Arr *p, int pos, int val)
{
  //  位置不合法
  if (pos < 0 || pos > p->cnt)
  {
    printf("pos error\n");
    return false;
  }
  //  数组是否满了
  if (isFull(p))
  {
    printf("数组满了\n");
    return false;
  }
  else
  {
    // 部分元素后移
    for (int i = p->cnt; i > pos; i--)
    {
      p->pBase[i] = p->pBase[i - 1];
    }
    // 改变第pos个元素
    p->pBase[pos] = val;
    p->cnt++;
    // 改变最后一个元素
    return true;
  }
}

bool delete (struct Arr *p, int pos, int *val)
{
  if (isEmpty(p))
  {
    printf("数组为空\n");
    return false;
  }
  // 位置不合法
  if (pos < 0 || pos > p->cnt - 1)
  {
    printf("pos error\n");
    return false;
  }
  *val = p->pBase[pos];
  for (int i = pos; i < p->cnt; i++)
  {
    p->pBase[i] = p->pBase[i + 1];
  }
  p->cnt--;
  return true;
}

int get()
{
  return true;
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
      printf("%d  ", p->pBase[i]);
    }
    printf("\n");
  }
}

void reverse(struct Arr *p)
{
  int i = 0;
  int j = p->cnt - 1;
  while (i < j)
  {
    int temp = p->pBase[i];
    p->pBase[i] = p->pBase[j];
    p->pBase[j] = temp;
    i++;
    j--;
  }
}

int main(void)
{

  main1();

  struct Arr arr;
  init(&arr, 99);
  printf("%d\n", arr.len);
  show(&arr);
  append(&arr, 1);
  show(&arr);
  append(&arr, 2);
  show(&arr);
  append(&arr, 3);
  show(&arr);

  insert(&arr, 1, 4);
  show(&arr);
  insert(&arr, 0, 99);
  show(&arr);
  insert(&arr, 6, 100);
  show(&arr);
  int del = 0;
  delete (&arr, 0, &del);
  printf("%d\n", del);
  show(&arr);

  reverse(&arr);
  show(&arr);
  return 0;
}
