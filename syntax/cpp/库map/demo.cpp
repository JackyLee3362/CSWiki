#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    map<pair<int, int>, float> m;
    pair<int, int> point(0, 0);
    m[point] += 2;
    cout << m[point] << endl;
    return 0;
}