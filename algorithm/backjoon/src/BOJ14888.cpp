#include <bits/stdc++.h>
using namespace std;
#define MINVAL -1000000000
#define MAXVAL 1000000000
int n;
int	num[11];
int op[4];
int minv = MAXVAL, maxv = MINVAL;

void	dfs(int idx, int res)
{
	int i;

	i = 0;
	if (idx == n - 1)
	{
		minv = min(minv, res);
		maxv = max(maxv, res);
		return ;
	}
	while (i < 4)
	{
		if (op[i] > 0)
		{
			op[i]--;

			if (i == 0)
				dfs(idx + 1, res + num[idx + 1]);
			else if (i == 1)
				dfs(idx + 1, res - num[idx + 1]);
			else if (i == 2)
				dfs(idx + 1, res * num[idx + 1]);
			else
				dfs(idx + 1, res / num[idx + 1]);
	
			op[i]++;
		}
		i++;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i;

	i = 0;
	cin >> n;
	while (i < n)
	{
		cin >> num[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		cin >> op[i];
		i++;
	}
	dfs(0, num[0]);
	
	cout << maxv << "\n";
	cout << minv;

	return (0);
}
