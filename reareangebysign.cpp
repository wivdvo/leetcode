#include <iostream>
#include <vector>

std::vector<int> rearrangeArray(std::vector<int> &nums) {
  std::vector<int> pos;
  std::vector<int> neg;

  for (auto nb : nums) {
    if (nb < 0)
      neg.push_back(nb);
    else
      pos.push_back(nb);
  }
  int j = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (i % 2 == 0)
      nums[i] = pos[j];
    else {
      nums[i] = neg[j];
      j++;
    }
  }
  return (nums);
}

int main() {
  std::vector<int> nums = {3, 1, -2, -5, 2, -4};
  rearrangeArray(nums);
}
