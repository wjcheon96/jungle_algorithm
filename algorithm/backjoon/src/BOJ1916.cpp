#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
using namespace std;

#define MAX 1001
#define INF 987654321

int n;								//도시 수
int m;								//버스 수
int start_node, end_node;			//시작 노드, 목표 노드

vector<pair<int, int>> adj[MAX];	//벡터를 넣는 배열 {거리, 노드}
int	dist[MAX];						//최소 거리 테이블

void dijkstra()
{
	dist[start_node] = 0;			//현재 cost 0
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
	//우선순위 큐에 heap의 형태로 값을 집어넣을거임.
	heap.push({dist[start_node], start_node});	//2차원 벡터에 시작 노드와 그 값을 집어넣음.

	while (!heap.empty())			//힙이 빌때까지 진행
	{
		auto cur = heap.top();	//auto 타입으로 현재 heap의 가장 위에 있는 애를 cur에 저장.
		heap.pop();							//힙의 가장 위에 있는 값을 pop해줌
		int distance = cur.first;			//cur의 첫번째 인덱스의 값을 distance에 저장.
		int idx = cur.second;				//cur의 두번째 인덱스의 값, 즉 노드를 idx에 저장.

		if (dist[idx] < distance)
			continue;				//이미 처리한 노드(최소비용이 확정된 노드)의 경우 지나감.

		for (auto next : adj[idx])	//다음 노드를 탐색하면서 딕셔너리 형태로 저장한 값을 비교
		{
			int nextD = next.first;			//next 노드의 첫번째 인덱스 값을 nextD에 저장.
			int nidx = next.second;			//next 노드의 두번째 인덱스 값을 nidx에 저장.
			if (dist[nidx] > dist[idx] + nextD)		//코스트 비교를 통해 해당 방식으로 지나가는 cost가 더 작으면
			{
				dist[nidx] = dist[idx] + nextD;		//현재 인덱스에 방금 진행한 cost를 저장.
				heap.push({dist[nidx], nidx});	//힙에 현재 인덱스와 노드를 push
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int i;
	cin >> n >> m;
	for (int i = 0; i <= n; i++)
		dist[i] = INF;
	i = 0;
	while (i < m)
	{
		int from, to, cost;
		cin >> from >> to >> cost;
		adj[from].push_back({cost, to});	//거리, 노드를 입력
		
		i++;
	}
	cin >> start_node >> end_node;
	
	dijkstra();

	cout << dist[end_node];

}
