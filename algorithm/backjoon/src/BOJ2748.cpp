#include <bits/stdc++.h>
using namespace std;

long long dp[100];

long long	fibonach(long long num)
{
	if (num <= 0)
	{
		dp[0] = 0;
		return (0);
	}
	else if (num <= 1)
	{
		dp[1] = 1;
		return (1);
	}
	if (dp[num] != 0)
		return dp[num];
	else
		return (dp[num] = fibonach(num - 1) + fibonach(num - 2));
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int			n;
	long long	result;

	cin >> n;

	result = fibonach(n);
	cout << result << '\n';

	return (0);
}
