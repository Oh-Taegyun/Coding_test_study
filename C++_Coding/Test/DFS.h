#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[9];
vector<int> graph[9];

void DFS(int x) {
	visited[x] = true;
	cout << x << ' ';
	for (int i = 0; i < graph[x].size(); i++) {
		int next = graph[x][i];
		if (!visited[next]) {
			DFS(next);
		}
	}
}

void BFS(int x) {
	queue<int> q;
	q.push(x);
	visited[x] = true;
	while (!q.empty()) {
		int y = q.front();
		q.pop();
		cout << y << ' ';
		for (int i = 0; i < graph[y].size(); i++) {
			int next = graph[y][i];
			if (!visited[next]) {
				q.push(next);
				visited[next] = true;
			}
		}
	}
}
