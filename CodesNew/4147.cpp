#include <bits/stdc++.h>

#define f(i,a,n) for(int i=a;i<n;i++)
#define S second
#define F first
#define Sc(n) scanf("%lld",&n)
#define scc(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define sp(a) scanf("%lld %lld",&a.first,&a.second)
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(),a.end()
#define sc(n) scanf("%d",&n)
#define It iterator
#define SET(a,b) memset(a,b,sizeof(a))
#define DRT()  int t; cin>>t; while(t--)

// inbuilt functions
// __gcd,  __builtin_ffs,     (returns least significant 1-bit, __builtin_ffsll(1)=1)
// __builtin_clz,             (returns number of leading zeroes in 
// __builtin_popcount,

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> vi;
#define tr(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define trv(s,it) for(auto it:s)
LL n,q;
vector<LL> a(n);
vector<LL> k(q);
LL dp[200007];

LL bs(LL v)
{
	LL l=1,h=n,mid;
	while(l<=h)
	{
		mid=l+(h-l)/2;
		if(dp[mid]==v)
			return mid;
		else if(dp[mid]>v)
			h=mid-1;
		else
			l=mid+1;
	}
	return mid;
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	
	cin>>n>>q;
	a.resize(n);
	k.resize(q);
	dp[0]=0;
	f(i,0,n)
	{
		cin>>a[i];
		dp[i+1]=dp[i]+a[i];
	}
	LL s=0;
	f(j,0,q)
	{
		LL x;
		cin>>x;
		k[j]=x;
		LL in=bs(x+s);
		if(dp[in]>x+s)
			in--;
		//cout<<"I: "<<in<<endl;
		if(in==n)
		{
			cout<<n<<endl;
			s=0;
		}
		else
		{
			cout<<n-in<<endl;
			s+=x;
		}
	}

}