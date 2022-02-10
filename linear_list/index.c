#include <stdio.h>
#define MAXSIZE 10
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status; //函数的返回值类型 返回 OK 或 ERROR
// 别名
typedef int ElemType;
typedef struct
{
  ElemType data[MAXSIZE];
  int length;
} SqList;

Status GetElem(SqList L, int i, ElemType *e)
{
  // 数组下标越界检查
  if (L.length == 0 || i < 1 || i > L.length)
    return ERROR;
  *e = L.data[i - 1];
  return OK;
}
// 初始化顺序表
Status InitList(SqList *L)
{
  L->length = MAXSIZE / 2;
  for (int i = 0; i < L->length; i++)
  {
    L->data[i] = i;
  }
  return OK;
}

// 插入元素 艹 总算写通了
Status ListInsert(SqList *L, int i, ElemType e)
{
  // 数组下标越界检查
  if (i < 1 || i > L->length + 1)
    return ERROR;
  // 数组满了
  if (L->length == MAXSIZE)
    return ERROR;
  // 倒序遍历 j>i-1 是因为 i 是第 几位 而不是下表值
  for (int j = L->length - 1; j >= i - 1; j--)
  {
    L->data[j + 1] = L->data[j];
  }
  L->data[i - 1] = e;
  L->length += 1;
  return OK;
}

// 删除元素
Status ListDelete(SqList *L, int i, ElemType *e)
{
  if (L->length == 0)
    return ERROR;
  if (i < 1 || i > L->length)
    return ERROR;
  // 存储删除的元素
  *e = L->data[i - 1];
  for (int j = i; j < L->length; j++)
  {
    printf("%d\n", j);
    L->data[j - 1] = L->data[j];
  }
  L->length -= 1;
  return *e;
}

int main(int argc, char const *argv[])
{
  SqList L;
  // 初始化线性表 L
  InitList(&L);

  ElemType e;
  // 将 e 的地址传递进去
  GetElem(L, 3, &e);
  // 期望的值是 index -1
  // 插入元素
  ListInsert(&L, 3, 10);

  ListDelete(&L, 3, &e);

  for (int i = 0; i < L.length; i++)
  {
    printf("%d ", L.data[i]);
  }
  return 0;
}
