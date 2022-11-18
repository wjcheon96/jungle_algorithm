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

        int     i;
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
                                if (j - coin[c] >= 0)
                                        dp[j] += dp[j - coin[c]];
                        }
                }
                cout << dp[m] << '\n';
                i++;
        }
        return (0);
}


