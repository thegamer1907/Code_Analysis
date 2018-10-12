#include<bits/stdc++.h>

using namespace std;

int n, m, mx;
int a[102];

bool check(int v)
{
    int sum = 0;
    for(int i = 0; i < n; ++i)
        sum += v - a[i];
    return sum >= m;
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if(a[i] > mx) mx = a[i];
    }

    int x = mx + m;
    int st = mx;
    int nd = x;
    int ans;

    while(st <= nd)
    {
        int md = (st + nd) >> 1;
        if(check(md))
        {
            ans = md;
            nd = md - 1;
        }
        else
            st = md + 1;
    }

    cout << ans << " " << x;
    return 0;
}
