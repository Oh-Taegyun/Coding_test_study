#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int N, K;
int ans = 0;

int main()
{
    cin >> N >> K;
    while (true)
    {
        if(N == 1)
        {
            break;
        }
        else if(N % K == 0)
        {
            N /= K;
        }
        else
        {
            N--;
        }
        ans++;
    }

    cout << ans << endl;

    
}