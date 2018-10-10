#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n,m,k;

ll bs (ll l,ll h)
{
    ll mm=(h+l)/2;
    //cout << l <<"  "<< mm<<"  "<<h << endl;
    ll ma=min(mm,n);
    ll res=0,res2=0;
    for (int i=ma;i>=1;i--)
    {
        res+=min(mm/i,m);
    }
    for (int i=ma;i>=1;i--)
    {
        res2+=min((mm-1)/i,m);
    }
    if (res >=k && res2 <k)
        return mm;

    if (res<k)
        return bs(mm+1,h);

    else
        return bs(l,mm);

}

int main()
{
    cin >> n >> m >> k;

    cout << bs(1,m*n) << endl;
    return 0;
}
