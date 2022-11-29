#include <iostream>
using namespace std;

int N, M;
int x, y;
int dir; // 캐릭터의 방향을 정해주는 변수
int map[50][50]; // 맵 정보 저장
int ans = 0; 

//축을 기준으로 동서남북이라는 경우의 수로 나누자
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void turn_left() // 생각치도 못한 부분 그냥 도는것만 생각했지 생각해보니 3이 되었을때 다시 0으로 되돌리는 기능이 있어야 했는데 그 기능이 없어서 무한적으로 돌기 시작했다.
{
    dir--;
    if(dir == -1)
        dir = 3;
}

int main()
{
    cin >> N >> M;
    cin >> x >> y >> dir;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> map[i][j];
        }
    }
    
    map[x][y] = 1; // 캐릭터가 밟은 칸을 이미 간 칸으로 설정
    ans += 1; // 움직인걸로 표시 

    int count = 0;
    while(true)
    {
        turn_left(); //캐릭터가 바라보는 쪽을 기준으로 왼쪽으로 돌고
        int nx = x + dx[dir]; // 한 칸 앞으로 가볼 수 있는지 확인하자
        int ny = y + dy[dir];
        if(map[nx][ny] == 0) // 바로 왼쪽 방향에 아직 가보지 않은 칸이 존재한다면
        {
            x = nx; // 왼쪽으로 한칸 전진한다
            y = ny; 
            ans++; // 움직였으니 기록한다.
            map[x][y] = 1; // 이미 간 칸으로 설정
            count = 0; // 돌았으니 돈 카운터 증가
            continue;
        }
        else // 왼쪽 방향에 가보지 않은 칸이 없다면 회전만 수행한다. 이미 회전은 위에서 돌았기 떄문에 또 돌지 말자
            count++; // 돌았으니 돈 카운터 증가

        if(count == 4) // 만일 모든 칸 다 돌았다면
        {
            nx = x - dx[dir]; // 바라보는 방향을 유지한 채 로 한칸 뒤로 가고
            ny = x - dy[dir];
            if(map[nx][ny] == 0) // 뒤쪽 방향이 바다인 칸이라 뒤로 갈 수 없다면
            {
                x = nx;
                y = ny;
            }
            else break;
            count = 0;
        }
        
    }
    
    cout<<ans;
    
}
