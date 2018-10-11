#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=3e6+7;
ll a[N],b[N],c[N],tree[N],lazy[N],cnt,sum,s2,mx;
vector <ll> v,u;
vector<pair<ll,ll>>vp;
map<ll,ll>mp;
bool vis[111111];
pair<ll,ll>p;
set<pair<ll,ll>>ss;
queue<ll>q;

int main()
{
    ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n,m=0,d,i=0,s1=0,s2=0,q=5,x=0,y,k,j;
    char s[111][111];
    //char c,s[N];
    //char c;
   cin>>n;
   ll l=1,r=n;
   while(l<=r)
   {
       ll mid = (l+r)/2;
       m=n;
       k=0;
       while(m>0)
       {
           k+=min(m,mid);
           m-=min(m,mid);
           m-=m/10;
       }
       if(k*2>=n)
        r=mid-1;
       else
        l=mid+1;
   }
   cout<<l;
}

