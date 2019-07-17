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
    sort(a.begin(), a.end());
    r = 1;
    while(q < m)
    {
        y = 0;
        while(a[q] - l <= k*r && q < m)
        {
           q++;
           y++;
        }
        l += y;
        if(y){kol++;}
        if(a[q] - l > k*r)
        {
            if((a[q] - l) % k)
            {
                r = (a[q] - l) / k + 1;
            }
            else
            {
                r = (a[q] - l) / k;
            }
        }
    }
    cout << kol;
    return 0;
}