#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
  // 一维向量
  vector<int> nums = {1, 3, 5, 2, 4, 6};
  // 二维向量
  vector<vector<int>> nums_2d = {{1, 2}, {3, 4}};
  // 长度
  nums.size();
  // 求和
  int sum_nums = accumulate(nums.begin(), nums.end(), 0);
  // 遍历一维的
  for (auto i : nums)
  {
  }
  for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
  {
  }
  // 遍历二维的
  for (auto n : nums_2d) // 这里auto编译为什么？
  {
  }
  for (vector<vector<int>>::iterator it = nums_2d.begin(); it != nums_2d.end(); it++)
    for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++)
    {
    }
  return 0;
}