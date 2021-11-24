#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100
// 别名
typedef int Status;

Status DeleteList(SeqList L, int i)
{
  int k;

  if (i > MAXSIZE)
  {
    return ERROR
  };

  if (i < 1 || i > L->length)
  {
    return ERROR
  };

  x = L[i];
  for (k = i; k <= L->length - 1; k++)
  {
    L[k - 1] = L[k]
  }
  L->length--;
  return OK
}