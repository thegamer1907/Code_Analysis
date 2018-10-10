#include<bits/stdc++.h>

#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define pb push_back
#define F first
#define S second

using namespace std;

typedef long long ll;

const int MAX = 2e5 + 33;
const int INF = 2e9 + 88;
const int MOD = 1e9 + 7;
const long double Pi = acos(-1);

ll n;
bool chk(ll tmp)
{
    ll rem = n;
    ll sm = 0;
    int trn = 1;
    while(rem)
    {
        if(trn)
            sm += min(tmp , rem) , rem -= min(tmp , rem);
        else
        if(rem >= 10)
            rem -= (rem * 10 / 100);
        trn = 1 - trn;
    }
    return (sm >= (n+1)/2);
}

int main()
{
    scll(n);

    ll st = 1, en = n;
    ll res = 0;

    while(st <= en)
    {
        ll md = (st + en)/2;
        if(chk(md))
            res = md , en = md - 1;
        else
            st = md + 1;
    }

    cout<<res;

    return 0;
}
