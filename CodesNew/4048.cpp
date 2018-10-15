#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
#define all(c) c.begin(),c.end()
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define end '\n'
ll n;
ll cs[200005],a[200005];
ll bs(ll p,ll &h,ll v)
{
if(h+v<a[p])
{
h+=v;
return p;
}
ll s=p,en=n;
ll ret;
while(s<=en)
{
ll mid=(s+en)/2;
if(cs[mid]-cs[p-1]-h<=v)
s=mid+1,ret=mid;
else
en=mid-1;
}
if(ret==n)
{
h=0;
return 1;
}
ret++;
ll temp=cs[ret]-cs[p-1]-h-v;
h=a[ret]-temp;
return ret;
}
int main()
{
IOS;
int t=1;
//cin>>t;
while(t--)
{
ll q;
cin>>n>>q;
f(i,1,n+1)
{
cin>>a[i];
cs[i]=cs[i-1]+a[i];
}
ll cur=1;
ll h=0;
while(q--)
{
ll x;
cin>>x;
cur=bs(cur,h,x);
cout<<n-cur+1<<end;
}
}
}