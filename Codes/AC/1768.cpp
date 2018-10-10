#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m,k;

ll f(ll mid)
{
    ll res = 0;
    for(int i=1;i<=n;i++)
    {
        res+=min((mid-1)/i , m);
    }
    return res;
}

int main()
{
    cin >> n >> m >> k;

    ll st = 1, en = (n*m)+1;
    ll mid;
    int cnt = 65;
    ll val;
    while(cnt--)
    {
        mid = (st+en)>>1;
        if(f(mid)>=k) en = mid;
        else st = mid;
    }
    cout << mid << endl;
    return 0;
}
