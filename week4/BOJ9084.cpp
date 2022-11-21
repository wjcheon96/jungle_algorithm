#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int t, n, m;
int coin[21];
int dp[10001];


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	i;
	int idx;

	i = 0;
	cin >> t;
	while (i < t)
	{
		cin >> n;
	
		idx = 1;
		while (idx <= n)
		{
			cin >> coin[idx];
			idx++;
		}
		cin >> m;
		bzero(dp, sizeof(dp));
		dp[0] = 1;
		for (int c = 1; c <= n; c++)
		{
			for (int j = 1; j <= m; j++)
			{
				// 이미 만들어진 동전에 조합 하나를 더 추가해서 값을 갱신한다.
				// 따라서, 현재 동전의 값에서 이전 동전의 값을 뺐을때, 0보다 크다 하면 새로운 방법을 만들 수 있으니,
				// 현재 동전의 값에서, 동전의 값에서 주어진 동전의 값을 하나씩 빼면서 가짓수만 세준다.
				if (j - coin[c] >= 0)
					dp[j] += dp[j - coin[c]];
			}
		}
		cout << dp[m] << '\n';
		i++;
	}
	return (0);
}
