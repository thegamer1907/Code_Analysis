#include<bits/stdc++.h>
#include<set>
#include<cstdio>
#include<iomanip>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#define pb push_back
#define mk make_pair
#define ll long long
#define fi first
#define se second
#define PI 3.14159265
#define ls l,m,rt<<1
#define rs m+1,r,rt<<1|1
#define eps 1e-7
#define pii pair<int,int>
#define pll pair<ll,ll>
typedef unsigned long long ull;
const int mod=998244353;
const ll inf=0x3f3f3f3f3f3f3f;
const int maxn=2e5+5;
using namespace std;
int n,m,k,x,s;
int a[maxn],b[maxn],c[maxn],d[maxn];
struct node
{
    int d,c;
    bool operator<(const node t)
    {
        if(t.d!=d)
        {
            return d<t.d;
        }
        return c<t.c;
    }
}st[maxn];


int main()
{
     ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m>>k;
    cin>>x>>s;
    for(int i=0;i<m;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
     for(int i=0;i<k;i++)cin>>st[i].c;
      for(int i=0;i<k;i++)cin>>st[i].d;
      st[k].d=2e9+1;
      sort(st,st+k);
      ll ans=1ll*x*n;
     for(int i=0;i<m;i++)
     {

        int tmp=s-b[i];int yu=n;
        if(tmp>=0)
        {
            node tt;tt.d=tmp;tt.c=2e9+1;
            int pos=lower_bound(st,st+k,tt)-st;
            if(st[pos].d>tmp)pos--;

            if(pos>=0)
            {
                yu-=st[pos].c;
                yu=max(yu,0);
                ans=min(ans,1ll*yu*a[i]);
            }
            else
            {
                ans=min(ans,1ll*n*a[i]);
            }
        }
     }
     node tt;tt.d=s;tt.c=2e9+1;
     int p=lower_bound(st,st+k,tt)-st;
     if(st[p].d>s)p--;
     if(p>=0)
     {
        int tt=max(0,n-st[p].c);
        ans=min(ans,1ll*tt*x);
     }
     cout<<ans<<endl;
    return 0;
}
