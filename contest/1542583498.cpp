#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pll pair <ll , ll>

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair

#define X first
#define Y second

#define LB(x) ((x) & -(x))
#define BIT(a , b) (((a)>>(b)) & 1)

const ll MAXN=1e5+10;

map <string , ll> r;

ll a[MAXN][10];
ll c[MAXN];

ll d[10];

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);

	ll n , k , w=0;
    cin>>n>>k;

    ll e0=0 , e1=0;

	for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=k;j++)
        {
            cin>>a[i][j];

            c[i]+=a[i][j];
            d[j]+=a[i][j];

            w=max(w , d[j]);
        }

        e0+=(c[i]==0);
        e1+=(c[i]==1);
    }

    if (w==n)
    {
        cout<<"NO";
        return 0;
    }

    if (e1>0 || e0>0)
    {
        cout<<"YES";
        return 0;
    }

    if (k<4)
    {
        cout<<"NO";
        return 0;
    }

    for(ll i=1;i<=n;i++)
    {
        string s="";

        for(ll j=1;j<=k;j++)
        {
            s+=char('0'+a[i][j]);
        }

        r[s]++;
    }

    if ((r["1100"]>0 && r["0011"]>0) || (r["1010"]>0 && r["0101"]>0) || (r["1001"]>0 && r["0110"]>0))
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        cout<<"NO";
        return 0;
    }
}
