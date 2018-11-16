#include <bits/stdc++.h>

using namespace std;
int a[105];

bool cmp(int a, int b)
{
    return a > b;
}
void solve()
{
    int n,k;
    cin >> n >> k;
    for(int i= 0 ;i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n, cmp);
    int cnt = 0;
   // if(a[0] != 0) cnt = 1;
    for(int i = 0; i < n; i++)
    {
        if(i < k)
        {
            if(a[i]!= 0) cnt++;
            else break;
        }
        else
        {
            if(a[i] == a[i-1]) cnt++;
            else break;
        }
    }
    cout << cnt  << endl;
}

int main()
{
    solve();
    return 0;
}
