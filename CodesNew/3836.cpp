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

int main()
{
    ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n,m=0,d,i=0,s1=0,s2=0,q=5,x=0,y,k,j;
    //string s="Bob",r="",t1="",t2;
    //char c,s[N];
    //char c;
   cin>>n;
   for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        m=max(m,a[i]);
    }
    x=ceil(double(sum)/(n-1));
    x=max(x,m);
    cout<<x;
}

