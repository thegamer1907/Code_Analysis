#include<bits/stdc++.h>
#define fi first
#define se second
#define FOR(a) for(int i=0;i<a;i++)
#define show(a) cout<<a<<endl;
#define show2(a,b) cout<<a<<" "<<b<<endl;
#define show3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl;
using namespace std;

typedef long long ll;
typedef pair<int,int> P;
typedef pair<P,int> LP;
const ll inf=1e18;
const int N=2e6;
const ll mod=1e9+7;

map<int,int>  mp;
map<string ,int>ml;
ll n,m,k,a[N],b[N],f[N];
int did[N],vis[N],num[N];
string s,ss;
ll s1,s2,s3,s4=0,flag,tot,t,sum,pos, cnt,x,y,xx,yy,ans;

vector<ll> v;
//char v[150][150];

set<int> se;
//P a[N];


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>n>>m;
	ll mi=1e9,mx=0;
	FOR(n)
	{
	cin>>a[i];
	sum+=a[i];
	mi=min(mi,a[i]);
	mx=max(mx,a[i]);
	}

	cout<<max(mx,(sum+m)/n+((sum+m)%n!=0))<<" "<<mx+m;





























}
