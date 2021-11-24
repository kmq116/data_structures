// 最大长度  线性表 是从 1 开始的
#define ListSize 20
// 类型别名
typedef int DataType;
// 结构
typedef struct
{
  // int 类型的线性表
  DataType data[ListSize];
  int length; // 线性表当前长度
} SeqList;

// 如果每个 元素占用 c 个存储单元
// 第 i 和 i + 1 之间的关系是
// LOC(ai + 1) = LOC(ai) + c