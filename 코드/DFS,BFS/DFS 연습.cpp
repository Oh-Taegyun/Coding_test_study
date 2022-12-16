#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool visited[9];
vector<int> graph[9];

vector<int> ans;

// BFS 함수 정의
void dfs(int start, vector<int> &ans) 
{
    stack<int> s;
    
    s.push(start);

    while (!s.empty())
    {
        int x = s.top();
        s.pop();

        if(!visited[x])
        {
            cout << x <<' ';
            visited[x] = true;
            for (int i = 0; i < graph[x].size(); i++)
            {
                int y = graph[x][i];
                s.push(y);
            }
            
        }
    }
    
}

int main(void) {
    // 노드 1에 연결된 노드 정보 저장 
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);
    
    // 노드 2에 연결된 노드 정보 저장 
    graph[2].push_back(1);
    graph[2].push_back(7);
    
    // 노드 3에 연결된 노드 정보 저장 
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);
    
    // 노드 4에 연결된 노드 정보 저장 
    graph[4].push_back(3);
    graph[4].push_back(5);
    
    // 노드 5에 연결된 노드 정보 저장 
    graph[5].push_back(3);
    graph[5].push_back(4);
    
    // 노드 6에 연결된 노드 정보 저장 
    graph[6].push_back(7);
    
    // 노드 7에 연결된 노드 정보 저장 
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);
    
    // 노드 8에 연결된 노드 정보 저장 
    graph[8].push_back(1);
    graph[8].push_back(7);


    
    dfs(1, ans);

}