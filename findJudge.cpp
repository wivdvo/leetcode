#include <vector>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {
	vector<int> trustFlag(n + 1, -1);
	vector<int> trustCount(n + 1, 0);

	for (int i = 0; i < trust.size(); i++)
	{
		trustFlag[trust[i][0]] = 1;
		trustCount[trust[i][1]]++;
	}
	for (int i = 1; i < trustFlag.size(); i++)
	{
		if (trustFlag[i] == -1 && trustCount[i] == n - 1)
			return (i);
	}
	return (-1);
}