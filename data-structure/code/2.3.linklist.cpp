#include <iostream>

using namespace std;
#include <iostream>

using namespace std;

// 单链表的结点类型定义
typedef struct LNode
{
    int data;           // 结点的数据域，int型占用4个字节
    struct LNode *next; // 结点的指针域，指针占用8个字节
} LNode, *LinkList;     // 由于边界对齐的要求，该struct实际占用16字节

int main()
{
    LNode lnode;

    return 0;
}