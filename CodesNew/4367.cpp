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

string cut(string a, int y)
{
	string b=a.substr(0,y);
	//cout<<b<<endl;
	return b;
}


int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n;
	cin>>n;
	vector<string> v(n);
	f(i,0,n)
		cin>>v[i];
	LL ans=0;
	for(int i=n-2;i>=0;i--)
	{
		int g=-1;
		string a=v[i];
		string b=v[i+1];
		for(int j=0;j<min(a.size(),b.size());j++)
		{
			if(a[j]>b[j])
			{
				g=j;break;
			}
			else if(a[j]<b[j])
			{
				g=-2;break;
			}
		}
		//cout<<a<<" "<<b<<" "<<g<<endl; 
		if(g==-2)
			;
		else if(g==-1)
		{
			if(a.size()>b.size())
				v[i]=cut(v[i],b.size());
		}
		else
			v[i]=cut(v[i],g);
	}
	f(i,0,n)
		cout<<v[i]<<endl;
}