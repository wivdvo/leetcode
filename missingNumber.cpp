#include <vector>
#include <iostream>

int missingNumber(std::vector<int>& nums) {
	int n = nums.size();
	std::vector<int> res(n + 1, -1);

	for(int i = 0; i < n; i++)
	{
		res[nums[i]] = nums[i];
	}

	for(int i = 0; i <= n; i++)
	{
		if (res[i] == -1)
			return (i);
	}
	return (-1);
}

int main()
{
	std::vector<int> nums = {3, 0, 1};
	std::cout << missingNumber(nums) << std::endl;
	return (0);
}