#include <iostream>
#include <queue>
using namespace std;

int graph[200][200];
bool visited[200][200];
int N, M;


void BFS(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x, y });
	int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = { 0, -1, 0, 1 };

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx<0 || nx>N || ny<0 || ny>M) { continue; }
			if (graph[nx][ny] == 0) { continue; }
			if (graph[nx][ny] == 1) {
				graph[nx][ny] = graph[x][y] + 1;
				q.push({ nx, ny });
			}
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%1d", &graph[i][j]);
		}
	}

	BFS(0, 0);

	cout << graph[N-1][M-1];

}