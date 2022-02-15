#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

// 别名
typedef int ElemType;
typedef int Status; //函数的返回值类型 返回 OK 或 ERROR
typedef struct Node
{
  ElemType data;
  struct Node *next;
} Node;

typedef struct Node *LinkList;

// 随机生成链表  两种方式 头插和尾插
void CreateListHead(LinkList *L, int n)
{
  LinkList p;

  // 申请创建新结点
  *L = (LinkList)malloc(sizeof(Node));
  // 将结点的 next 值指向 NULL
  (*L)->next = NULL;
  for (int i = 0; i < n; i++)
  {
    p = (LinkList)malloc(sizeof(Node));
    p->data = i;
    // 将当前结点赋值为头结点的 next 值
    p->next = (*L)->next;
    // 将头结点的 next 值指向当前结点 完成头插入
    (*L)->next = p;
  }
}

void CreateListTail(LinkList *L, int n)
{
  LinkList p;
  LinkList r;
  // 临时变量 一直引用最后一个结点
  r = *L;
  for (int i = 0; i < n; i++)
  {
    p = (LinkList)malloc(sizeof(Node));
    p->data = i;
    // 将当前结点赋值为头结点的 next 值
    r->next = p;
    // 将头结点的 next 值指向当前结点 完成头插入
    r = p;
  }
  // 将头结点的 next 值指向 NULL
  r->next = NULL;
}

Status main()
{
  LinkList L;
  LinkList L1;
  // 初始化链表
  CreateListHead(&L, 3);
  CreateListTail(&L1, 3);

  return OK;
}
