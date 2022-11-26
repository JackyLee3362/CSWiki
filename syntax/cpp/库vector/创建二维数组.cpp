#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
template <typename T>
void print2dvector(vector<vector<T>> v)
{
    for (vector<T> row : v)
    {
        for (T item : row)
            cout << item << ' ';
        cout << endl;
    }
}
int main()
{
    // 静态二维数组
    int a1[2][3] = {1, 2, 3, 4, 5, 6};
    // 动态二维数组
    vector<vector<int>> a3(3, vector<int>(2));
    a3.assign(3, vector<int>(3));

    // print2dvector(a3);
    vector<vector<float>> a4(3.0, vector<float>(2.0));
    a4[0][0] = 1.2;
    cout << a4[0][0] << endl;
    print2dvector(a4);
    return 0;
}