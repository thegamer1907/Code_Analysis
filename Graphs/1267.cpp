#include <bits/stdc++.h>
using namespace std;
int a[30005];
int main()
{
    int n,t;
    cin >> n >> t;
    for(int i=1;i<n;++i)
    {
        cin >> a[i];
    }
    int now = 1;
    while(now<n)
    {
        now += a[now];
        if(now==t)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
