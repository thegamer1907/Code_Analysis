#include<bits/stdc++.h>
#include <math.h>
using namespace std;
 
#define MOD 1000000007
#define ll long long
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define sld(t) scanf("%ld",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define pcc pair<char,char>
#define pp pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define mp(a,b) make_pair(a,b)
#define F first
#define S second
#define pb(x) push_back(x)

string A[107];
int main()
{
	string s;
	cin>>s;
	int n;
	sd(n);
	bool f = 0;
	for( int i=0; i<n; i++)
	{
		cin>>A[i];
		if(A[i]==s)
		{
			f = 1;
		}
	}
	for( int i=0; i<n; i++)
	{
		for( int j=i; j<=n; j++)
		{
			string p = "";
			p +=  A[i][1];
			p += A[j][0];
		//	cout<<p<<endl;
			if(p==s)
			{
				f = 1;
			}
			p = "";
			p += A[j][1];
			p += A[i][0];
			if(p==s)
			{
				f = 1;
			}
		//	cout<<p<<endl;
		}
	}
	if(f)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}