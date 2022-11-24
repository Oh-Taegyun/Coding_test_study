#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k;
int ans = 0;
vector<int> arr;

int main()
{
    cin >> n >> m >> k;

    for(int i = 0; i< n; i++)
    {
        int p;
        cin >> p;
        arr.push_back(p);
    }

    sort(arr.begin(),arr.end(),greater<int> ());


    while (true)
    {
        if(m == 0)
            break;
        for (int i = 0; i < k; i++)
        {
            int x = arr[0];
            ans += x;
            m--;
        }
        int j = arr[1];
        ans += j;
        m--;
    }

    cout << ans;

}