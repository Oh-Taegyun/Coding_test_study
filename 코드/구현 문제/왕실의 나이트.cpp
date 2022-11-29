#include<iostream>
#include<vector>
#include<string>
using namespace std;

int dx[] = {2, 2, 1, 1, -2, -2, -1, -1};
int dy[] = {1, -1, 2, -2, 1, -1, 2, -2};
int ans = 0;
string input;

int main()
{
    cin >> input;
    int x = input[0] - 'a' + 1;
    int y = input[1] - '0';

    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 1 || nx > 8 || ny < 1 || ny >8)
        {
            continue;
        }
        
        ans++;

    }
    
    cout<<ans;
}