#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

// 别名
typedef int Status;

Status GetNode(SeqList L, int i, ElemType *e)
{
  // 如果索引值越界，返回错误
  if (i < 1 || i > L.length)
    return ERROR;
  // 因为索引值从1开始，所以需要减1
  *e = L.data[i - 1];
  return OK;
}