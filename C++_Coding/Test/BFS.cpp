#include <iostream>
#include <queue>
#include <vector>

/* 


using namespace std;

bool visited[9];
vector<int> graph[9];


void bfs(int start) {
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty()) {
        int next = q.front();
        q.pop();
        cout << next << ' ';
        for (int i = 0; i < graph[next].size(); i++) {
            if (!visited[graph[next][i]]) {
                visited[graph[next][i]] = true;
                q.push(graph[next][i]);
            }
        }
    }
}

void dfs(int x) {
    visited[x] = true;
    cout << x << ' ';
    for (int i = 0; i < graph[x].size(); i++) {
        if (!visited[graph[x][i]]) {
            dfs(graph[x][i]);
        }
    }
}

int main(void) {
    // ��� 1�� ����� ��� ���� ���� 
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);

    // ��� 2�� ����� ��� ���� ���� 
    graph[2].push_back(1);
    graph[2].push_back(7);

    // ��� 3�� ����� ��� ���� ���� 
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);

    // ��� 4�� ����� ��� ���� ���� 
    graph[4].push_back(3);
    graph[4].push_back(5);

    // ��� 5�� ����� ��� ���� ���� 
    graph[5].push_back(3);
    graph[5].push_back(4);

    // ��� 6�� ����� ��� ���� ���� 
    graph[6].push_back(7);

    // ��� 7�� ����� ��� ���� ���� 
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);

    // ��� 8�� ����� ��� ���� ���� 
    graph[8].push_back(1);
    graph[8].push_back(7);

    dfs(1);
}
*/