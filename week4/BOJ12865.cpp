#include <iostream>
#include <vector>
using namespace std;

int getMaxValue(vector<pair<int, int>> items, int k)
{
	vector<vector<int>> dp(items.size(), vector<int>(k + 1));
	
	for (int i = 0; i <= k; ++i)
		dp[0][i] = 0;
	
	for (int i = 1; i < items.size(); ++i)
	{
		for (int j = 0; j < items[i].first; ++j)
			dp[i][j] = dp[i - 1][j];
		
		for (int j = items[i].first; j <= k; ++j)
		{
			int left = j - items[i].first;
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][left] + items[i].second);
		}
	}

	return dp[items.size() - 1][k];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> items(n + 1, make_pair(0, 0));
	
	for (int i = 1; i <= n; ++i)
	{
		cin >> items[i].first;
		cin >> items[i].second;
	}
	int value = getMaxValue(items, k);
	cout << value;

	return (0);
}
