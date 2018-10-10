#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<ll,ll>
#define piii pair<int,pair<int,int>>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define SIZE 10000002
#define MOD 1000000007
#define LD long double
#define bpc __builtin_popcount
using namespace std;

inline ll getnum()
{
    char c = getchar();
    ll num,sign=1;
    for(;c<'0'||c>'9';c=getchar())if(c=='-')sign=-1;
    for(num=0;c>='0'&&c<='9';)
    {
        c-='0';
        num = num*10+c;
        c=getchar();
    }
    return num*sign;
}

int main()
{
    ll n=getnum(),m=getnum(),k=getnum();

    ll l=1,r=n*m;

    while(l<r)
    {
        ll x=(l+r)/2;
        ll tot=0;
        for(ll i=1;i<=n;i++)
        {
            ll y=x/i;
            if(y>m)tot+=m;
            else tot+=y;
        }

        if(tot<k)l=x+1;
        else r=x;
    }

    cout<<r<<endl;
}