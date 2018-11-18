#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vl; 

#define debug1(x)		  cout<<x<<endl
#define debug2(x,y)       cout<<x<<"   "<<y<<endl
#define debug3(x,y,z)     cout<<x<<"   "<<y<<"   "<<z<<endl
#define debug4(x,y,z,xy)  cout<<x<<"   "<<y<<"   "<<z<<"   "<<xy<<endl
#define tc int t; cin>>t; while(t--)
#define FOR(ii,jj,nn) for(int ii=jj;ii<nn;ii++)
#define ALL(x) (x).begin(),(x).end()
#define mp(x,y) make_pair(x,y)
#define CLEAR(a)  memset(a,0,sizeof(a))
#define CLEARN(a) memset(a,-1,sizeof(a))
#define sz(x) (int)x.size()
#define pb(x) push_back(x)
#define ff first
#define ss second  
#define si(x) 			scanf("%d",&x)
#define sii(x,y) 		scanf("%d%d",&x,&y)
#define siii(x,y,z) 	scanf("%d%d%d",&x,&y,&z)
#define siiii(x,y,z,zz) scanf("%d%d%d%d",&x,&y,&z,&zz)
#define sl(x) 			scanf("%lld",&x)
#define sll(x,y) 		scanf("%lld%lld",&x,&y)
#define slll(x,y,z) 	scanf("%lld%lld%lld",&x,&y,&z)
#define sllll(x,y,z,zz) scanf("%lld%lld%lld%lld",&x,&y,&z,&zz)
#define pi(x) 			printf("%d\n",x)
#define pl(x) 			printf("%lld\n",x)
#define mod (int)1000000007
#define inf (int)1e6+5
#define lim (int)1e5+5

int main()
{
	int n,k;
	cin>>n>>k;
	int x;
	map<int,int> mm;
	mm[0]=1;
	bool mark=false;
	FOR(i,0,n)
	{
		int mask=0;
		FOR(j,0,k)
		{
			cin>>x;
			if(x)
				mask|=(1<<j);
		}
		if(mm[mask]>=1)
			mark=true;
		FOR(j,0,(1<<k))
		{
			if((j&mask)==0)
				mm[j]++;
		}
	}
	if(mark)
	{
		cout<<"yes\n";
		return 0;
	}
	cout<<"no\n";
}