#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
  int data;
  struct Node *pNext; // 指向自身的类型
} NODE, *pNode;       // 起个别名

typedef struct Stack
{
  pNode pTop;
  pNode pBottom;
} STACK, *pStack;

void initStack(pStack p)
{
  p->pBottom = p->pBottom = (pNode)malloc(sizeof(NODE));
  if (NULL == p->pTop)
  {
    printf("动态内存分配失败！\n");
  }
  else
  {
    p->pBottom = p->pTop;
    // 将 buttom 结点指向设置为空
    p->pTop->pNext = NULL;
  }
}
void pushStack(pStack s, int val)
{
  pNode pNew = (pNode)malloc(sizeof(NODE));
  pNew->data = val;
  pNew->pNext = s->pTop;
  s->pTop = pNew;
}

bool empty(pStack s)
{
  if (s->pBottom == s->pTop)
  {
    return true;
  }
  else
  {
    return false;
  }
}
bool popStack(pStack s, int *val)
{
  if (empty(s))
  {
    printf("栈空\n");
    return false;
  }
  else
  {
    pNode r = s->pTop;
    *val = s->pTop->data;
    s->pTop = r->pNext;
    free(r);
    r = NULL;
  }
}
void clear(pStack s)
{
  if (empty(s) != true)
  {
    pNode p = s->pTop;
    pNode q = NULL;
    //  这里不要判断 NULL 而是判断 是不是和栈底指针相等
    while (p != s->pBottom)
    {
      q = p->pNext;
      free(p);
      p = q;
    }
    // 改变栈顶指针指向
    s->pTop = s->pBottom;
  }
}
void traverse(pStack s)
{
  pNode p = s->pTop;
  //  这里不要判断 NULL 而是判断 是不是和栈底指针相等
  while (p != s->pBottom)
  {
    printf("%d\n", p->data);
    p = p->pNext;
  }
}

int main(void)
{

  STACK s;
  initStack(&s);
  pushStack(&s, 1);
  pushStack(&s, 2);
  pushStack(&s, 3);
  pushStack(&s, 4);

  int popVal;

  if (popStack(&s, &popVal))
  {
    printf("出栈成功 %d\n", popVal);
  }
  else
  {
    printf("出栈失败 %d\n", popVal);
  }
  traverse(&s);
  printf("换行\n");
  clear(&s);

  traverse(&s);
  return 0;
}