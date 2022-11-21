#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1000];
int dp[1000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie();

	int res = -1;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		int maxnum = 0;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				if (dp[j] > maxnum)
					maxnum = dp[j];
			}
		}
		dp[i] = maxnum + 1;
	}
	for (int i = 0; i < n; i++)
	{
		if (dp[i] > res)
			res = dp[i];
	}
	cout << res << endl;
	return (0);
}
