
// 抽象代码  取并集
void union(Linear_List LA, Linear_list LB)
{
  // 表长度
  n = ListLength(LA);
  // 遍历获取元素
  for (i = 1; i < ListLength(LB); i++)
  {
    // 获取元素
    x = GetNode(LB, i);
    // 表中没有该元素 插入
    if (LocateNode(LA, x) == 0)
    {
      Insert(LA, n + 1, x);
      n++;
    }
  }
}