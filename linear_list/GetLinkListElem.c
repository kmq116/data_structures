

// 别名
typedef int Status;

Status GetNode(LinkList L, int i)
{
  int *p;
  int j = 0;
  // 不知道遍历次数 所以用while
  while (*p != NULL && j < i)
  {
    // p 指向下一个元素的结点
    *p = L[j]->next;
    j++;
  }
  return *p;
}
