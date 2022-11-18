#include <bits/stdc++.h>

using namespace std;
int k;
int v, e;
vector<vector<int>> data;
vector<bool> visited;
int Bigraph[200001];

void	dfs(int here, int binumber)
{
	visited[here] = binumber;
	for (int i = 0; i < data[here].size(); ++i)
	{
		int there = data[here][i];
		if (!visited[there])
			dfs(there, 1 - binumber);
	}
}


void	put_data()
{
	int i;

	i = 0;
	while (i < e)
	{
		int n1, n2;
		cin >> n1 >> n2;
		data[n1].push_back(n2);
		data[n2].push_back(n1);
		i++;
	}
	i = 1;
	while (i <= v)
	{
		if (!visited[i])
			dfs(1, 1);
		i++;
	}
}

bool check()
{
	for (int i = 1; i <= v; ++i)
	{
		int here = i;
		for (int j = 0; j < data[j].size(); ++j)
		{
			int there = adj[i][j];

		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int i;

	i = 0;
	cin >> k;
	while (i < k)
	{
		cin >> v >> e;
		put_data();
		i++;
	}
}
