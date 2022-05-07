#include <iostream>
#include <list>

using namespace std;

int main()
{
    // 数组的创建
    list<int> myints;

    // 数组插入（在末尾）
    myints.push_back(1); // {1}
    myints.push_back(2); // {1, 2}

    // 数组插入
    myints.insert(myints.begin(), 2, 100); // 在起始位置插入两个3 ->{100,100,1,2}

    // 删除末尾数
    myints.pop_back(); // {100,100,1}

    // 输出数组长度
    cout << "size: " << myints.size() << endl; // size: 3

    // 打印数组
    for (auto i : myints)
        cout << i << endl;

    return 0;
}