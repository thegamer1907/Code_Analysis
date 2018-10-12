#include<bits/stdc++.h>
 
using namespace std;
 

 
typedef long long ll;
 
const int MAX = 2e5 + 11;
 
ll a[MAX],csum[MAX];
int n;
 
int bs(int pos,ll &hits,ll val)
{
    if(val + hits < a[pos])
    {
        hits += val;
        return pos;
    }
    int st = pos,en = n;
    int ret;
    while(st <= en)
    {
        int md = (st + en)>>1;
        if(csum[md] - csum[pos - 1] - hits <= val)
            st = md + 1,ret = md;
        else
            en = md - 1;
    }
    if(ret == n)
    {
        hits = 0;
        return 1;
    }
    ret++;
    ll tmp = csum[ret] - csum[pos - 1] - hits - val;
    hits = a[ret] - tmp;
    return ret;
}
 
int main()
{
    int q;
    cin>>n;
    cin>>q;
 
    ll sm = 0;
 
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        csum[i] = csum[i - 1] + a[i];
    }
 
    int cur = 1;
    ll hits = 0;
 
    for(int i=0;i<q;++i)
    {
        ll x;
        cin>>x;
        cur = bs(cur,hits,x);
        cout<<n - cur + 1<<endl;
    }
 
    return 0;
}