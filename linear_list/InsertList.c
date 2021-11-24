
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100

typedef int Status;

Status InsertList(int *L, int i, int e)
{
  int k;
  // 溢出检查
  if (L->length == MAXSIZE)
    return ERROR;

  // 数组下标越界检查
  if (i < 1 || L->length < i)
    return ERROR;

  // 将数组后移
  for (k = L->length - 1; k >= i - 1; k--)
    L[k + 1] = L[k];

  // 插入元素
  L[i - 1] = e;
  // 表长度加一
  L->length++;
  return OK;
}
