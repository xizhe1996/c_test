#include <iostream>
#include <vector>

// 448 使用负值标记出现过的数字 遍历获取最终结果
class Solution {
 public:
  std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
    std::vector<int> ans;
    for (const auto& num : nums) {
      int pos = abs(num) - 1;
      if (nums[pos] > 0) nums[pos] = -nums[pos];
    }

    for (int i = 0; i < nums.size(); ++i) {
      if (nums[i] > 0) ans.push_back(i + 1);
    }
    return ans;
  }
};

int main() {
  std::cout << "hello" << '\n';

  return 0;
}