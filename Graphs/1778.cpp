#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 1;
    int cnt = i + a[i];
    while(cnt != t)
    {
        i = cnt;
        cnt = i + a[i];
        if(cnt == t)
        {
            cout << "YES";
            return 0;
        }
        if(cnt > t)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
