typedef struct node //结点类型定义
{
  // 结点数据域
  DataType data;
  // 结点指针域
  struct node *next;
} ListNode;

typedef ListNode *LinkList;
//指向结点的指针
ListNode *p;
// 指向单链表的头指针
LinkList head;
