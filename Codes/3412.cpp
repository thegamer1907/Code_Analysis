#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define F first
#define S second
#define eps 1e-6
#define mp make_pair
const long long INF=1e18;
const int MX=200005;
int N, M, k;
int arr[MX];
ll n;
bool ch(ll mid, ll nn)
{
    ll v=0;
    while(nn > 0)
    {
        v+=min(mid, nn);
        nn-=min(mid, nn);
        ll cur=nn/10;
        if(!cur) break;
        nn-=cur;
    }
    v+=max(0LL, nn);
    return v*2LL >= n;
}
int main()
{
    cin>>n;
    ll lo=1, hi=n, R;
    while(lo <= hi)
    {
        ll mid=(lo+hi)>>1;
        if(ch(mid, n))
        {
            R=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<R;
}

