
// 删除线性表中重复的元素
void purge(Linear_list LA)
{
  i = 1;
  while (i < ListLength(LA))
  {
    // 获取外层元素
    x = GetNode(LA, i);
    j = i + 1;
    // 遍历内层
    while (i < ListLength(LA))
    {
      y = GetNode(LA, j);
      if (x == y)
      {
        Delete(LA, j);
      }
      else
      {
        j++;
      }
    }
  }
}