#include <vector>
#include <iostream>

long long largestPerimeter(std::vector<int>& nums) {
	long long sum = 0;
	long long res = -1;

	if (nums.size() < 3)
		return (-1);
	
	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] < sum)
			res = nums[i] + sum;
		sum += nums[i];
	}
	return (res);
}

int main()
{
	std::vector<int> nums = {5, 5, 5};
	std::cout << largestPerimeter(nums) << std::endl;
}
