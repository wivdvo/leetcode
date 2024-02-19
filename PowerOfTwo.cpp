#include <iostream>


bool isPowerOfTwo(int n) {
	if (n <= 0)
		return (false);
	
	if (((n - 1) & n) == 0)
		return (true);
	else
		return (false);
}


int main()
{
	if (isPowerOfTwo(16))
		std::cout << "yes" << std::endl;
}