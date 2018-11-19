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

int A[100007][5];
map<int,int> imap;
int main()
{
	int n,k;
	sd(n); sd(k);
	int p = (1<<k) - 1;
//	cout<<p<<endl;
	for( int i=1; i<=n; i++)
	{
		int num = 0;
		for( int j=0; j<k; j++)
		{
			sd(A[i][j]);
			num += A[i][j]*(1<<(j));
		}
	//	cout<<num<<endl;
		imap[num] = 1;
	}
//	cout<<"here"<<endl;
	bool f = 0;
	for( int i=1; i<=n; i++)
	{
		int num = 0;
		for( int j=0; j<k; j++)
		{
			num += A[i][j]*(1<<(j));
		}
		if(num==0)
		{
			f = 1;
		}
	//	cout<<i<<" "<<num<<endl;
		int num1 = num^p;
		if(imap[num1])
		{
			f = 1;
		}
		for( int j=0; j<=p; j++)
		{
			num1 = j;
			if((num & num1) == 0)
			{
		//		cout<<"num1 is "<<num1<<endl;
				if(imap[num1])
				{
					f = 1;
				}
			}
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