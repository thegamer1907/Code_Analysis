#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll n, m, i, j, x, y, l, r, k, q, kol;
vector<ll> a;
int main()
{
    cin >> n >> m >> k;
    a.resize(m);
    for(i = 0; i < m; i++)
        cin >> a[i];
    r = 1;
    while(q < m)
    {
        y = 0;
        while(a[q] - l <= k*r)
        {
           q++;
           y++;
        }
        l += y;
        if(y){kol++;}
        if(a[q] - l > k*r){r++;}
    }
    cout << kol;
    return 0;
}