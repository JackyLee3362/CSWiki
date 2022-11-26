#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
inline int f(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 1, b = 2;
    cout << f(a, b) << endl;
    return 0;
}