#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // 默认比较
    vector<int> nums = {4, 2, 3};
    sort(nums.begin(), nums.end());
    for (auto rows : nums)
        cout << rows << endl;
    // 自定义比较
    vector<vector<int>> nums2 = {{7, 8}, {1, 2}, {3, 4}, {5, 6}};
    sort(nums2.begin(), nums2.end(), [](auto a, auto b)
         { return a[0] < b[0]; }); // 比较小的排在前面
    for (auto rows : nums2)
        cout << rows[0] << rows[1] << endl;
    return 0;
}