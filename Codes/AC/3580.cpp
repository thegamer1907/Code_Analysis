#define _CRT_SBCURE_MO_DEPRECATE  
#include<iostream>  
#include<stdlib.h>  
#include<stdio.h>  
#include<cmath>  
#include<algorithm>  
#include<string>  
#include<string.h>  
#include<set>  
#include<queue>  
#include<stack>  
#include<functional>   
typedef long long ll;
using namespace std;
const int maxn = 2e5 + 10;
const int INF = 1e18;
ll n,m,k,x,s;
ll a[maxn],b[maxn],c[maxn],d[maxn];
ll fun(ll t,ll co)
{
    ll mi=n*t;
    ll l=0,r=k-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(co+d[mid]<=s)
        {
            mi=min(mi,(n-c[mid])*t);
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return mi;
}
int main()
{
    cin>>n>>m>>k>>x>>s;
    ll ma=n*x;
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    for(int i=0;i<k;i++)
        cin>>c[i];
    for(int i=0;i<k;i++)
        cin>>d[i];
    for(int i=0;i<m;i++)
    {
        ll c=b[i],t=a[i];
        if(c<=s)
            ma=min(ma,fun(t,c));
    }
    ma=min(ma,fun(x,0));
    cout<<ma<<endl;
}
