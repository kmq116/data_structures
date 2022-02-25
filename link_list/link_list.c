#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
// 链表分类 1 单向链表  2 双向链表
//  循环链表

typedef struct Node
{
  int data;
  struct Node *pNext; // 指向自身的类型
} NODE, *pNode;       // 起个别名

//  链表插入  待插入元素是  拆分结点  change next 指向
// 离散 存储 链表

bool isEmpty(pNode L)
{
  return L->pNext == NULL;
}

int Length(pNode L)
{
  if (isEmpty(L))
    return 0;
  int i = 0;
  pNode p = L->pNext;
  while (p != NULL)
  {
    i++;
    p = p->pNext;
  }
  return i;
}

void sort(pNode L)
{
  int len = Length(L);
  int i, j, t;
  pNode p, q;
  for (i = 0, p = L->pNext; i < len - 1; i++, p = p->pNext)
  {
    for (j = i + 1, q = p->pNext; j < len; j++, q = q->pNext)
    {

      if (p->data > q->data)
      {
        t = p->data;
        p->data = q->data;
        q->data = t;
      }
    }
  }
}

void insert(pNode L, int index, int val) {}

void delete (pNode L, int index, int val)
{
}

// 返回一个指针变量
pNode init()
{
  int len;

  pNode head = (pNode)malloc(sizeof(NODE));
  //  申请不到内存 head 值为 NULL
  if (head == NULL)
  {
    printf("分配失败\n");
    exit(-1);
  }

  printf("请输入链表长度 len = ");
  scanf("%d", &len);

  int val;

  pNode pTail = head;
  for (int i = 0; i < len; i++)
  {
    printf("请输入第 %d 个节点的值", i);

    scanf("%d", &val);

    pNode pNew = (pNode)malloc(sizeof(NODE));

    if (head == NULL)
    {
      printf("局部变量内存 ，分配失败\n");
      exit(-1);
    }

    pNew->data = val;
    pTail->pNext = pNew;
    pNew->pNext = NULL;
    pTail = pNew; // 保存链表的尾结点
  }
  return head;
}

//  遍历链表
void traverse(pNode L)
{
  pNode p = L->pNext;

  //  应该判断 p 不指向空
  //  应该判断 p 不指向空
  //  应该判断 p 不指向空
  while (p != NULL)
  {
    printf("%d\n", p->data);
    p = p->pNext;
  }
}

int main(void)
{
  pNode pHead = NULL; // 创建一个链表的指针变量
  pHead = init();
  sort(pHead);
  traverse(pHead);

  printf("%d\n", Length(pHead));

  return 0;
}