#include<bits/stdc++.h>
#include<set>
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<cstring>
#include<algorithm>
#define pb push_back
#define ll long long
#define PI 3.14159265
#define ls l,m,rt<<1
#define rs m+1,r,rt<<1|1
#define eps 1e-7
typedef unsigned long long ull;
const int mod=1e9+7;
const int maxn=5e5+5;
const int inf=0x4f4f4f4f;
using namespace std;
ll n,k,m;
int q;
bool judge(ll x)
{
    ll sum=0;
    for(int i=1;i<=n&&i<=x;i++)
    {
        sum+=min((x-1)/i,m);
    }
    return sum>=k;
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>k;
    ll l=1;ll r=n*m;
    while(l<=r)
    {
        ll mid=(l+r)>>1;
     //   cout<<l<<' '<<mid<<' '<<r<<endl;
        if(judge(mid))
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<l-1<<endl;
    return 0;
}
