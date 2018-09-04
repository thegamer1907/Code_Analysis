#include <bits/stdc++.h>

using namespace std;
using namespace __gnu_cxx;


#define f first
#define s second
#define sz size()
#define pb push_back
#define mem(a,b,s) for(int i=0 ; i<=s ; ++i) a[i]=b;
#define mem2(a,r,c,b) for(int i=0 ; i<=r ; ++i)    for(int j=0 ; j<=c ; ++j)    a[i][j]=b;
#define all(a) a.begin(),a.end()
#define mp make_pair
#define in insert
#define sc(Input) scanf("%d",&Input)
#define scl(Input)	scanf("%lld",&Input)
#define sc2(a,b)	scanf("%d%d",&a,&b)
#define rep(x,a,b)	for(int x=a ; x<=b ; ++x)
#define irep(x,a,b)	for(int x=a ; x>=b ; --x)

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;
typedef set<int> si;
typedef set<pair<int,int> > sii;
typedef map<int,int>	mii;
typedef pair<int,char>	ic;
typedef pair<int,string> is;

const double pi=3.14159265358979323846264338327950288419716939937510582097494459;
const double EPS = 1e-9;
const int MAXN=1e7+10;
const ll MOD=1e9+7;
const int oo=2e9+10;
const ll OO=1e18;

int dx[]={0,1,0,-1,-1,-1,1,1};
int dy[]={1,0,-1,0,-1,1,-1,1};

ll acc[MAXN];
int n,m,f[MAXN],l,r;
bool prime[MAXN];

void sieve()
{
	for(ll i=2 ; i<MAXN-2 ; ++i)
	{
		acc[i]=acc[i-1];
		if(!prime[i])
			for(ll j=i ; j<MAXN-2 ; j+=i)	prime[j]=1,acc[i]+=1ll*f[j];
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("In.txt","r",stdin);
#endif
//	freopen("Out.txt","w",stdout);

	sc(n);
	rep(i,1,n)	scanf("%d",&l),++f[l];
	sieve();
	sc(m);
	rep(i,1,m)
	{
		scanf("%d%d",&l,&r);
		r=min(r,MAXN-3);
		l=min(l,MAXN-3);
		printf("%lld\n",acc[r]-acc[l-1]);
	}
}
