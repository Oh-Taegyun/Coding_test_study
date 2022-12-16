#include <iostream>
#include <vector>
using namespace std;

// 맵을 처음부터 하나하나 방문해서 1번일 경우 다음으로 0번일 경우 DFS로 탐색하도록 하자
int graph[1000][1000];

int N, M;
int ans = 0;

bool dfs(int x, int y)
{
    if(x < 0 || x > M || y < 0 || y > N) 
        return false;
    if(graph[x][y] == 0)
    {
        graph[x][y] = 1;
        dfs(x-1,y);
        dfs(x,y-1);
        dfs(x+1,y);
        dfs(x,y+1);
        return true;
    }
    return false;
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> graph[i][j];
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(dfs(i,j) == true)
            {
                ans++;
            }
            
        }
        
    }
    
    cout<<ans;
}