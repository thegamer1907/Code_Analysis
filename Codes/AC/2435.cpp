#include <bits/stdc++.h>
using namespace std;

/**************TEMPLATE***************************************************************************************************/
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

/*************************************************************************************************************************/

int x[10000010]={0};
int a[10000010]={0};
bool prime[10000010]={0};


void getprime()
{
	prime[0]=1;
	prime[1]=1;
	int n=10000000;
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==0)
		{
			for(int j=2*i;j<=n;j+=i)
			{
				prime[j]=1;
			}
		}
	}
}

void precompute()
{
	int n=10000000;
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)
		{
			int j=i;
			int cnt=0;
			while(j<=n)
			{
				cnt+=x[j];
				j+=i;
			}
			a[i]=cnt;
		}
	}
	for(int i=3;i<=n;i++)
	{
		a[i]+=a[i-1];
	}
}





int main()
{	
	fast_io;
	getprime();
	int n;
	cin>>n;
	int v;
	for(int i=0;i<n;i++)
	{
		cin>>v;
		x[v]++;
	}
	precompute();
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int l,r;
		cin>>l>>r;
		if(r>10000000)
		{
			r=10000000;
		}
		if(l>10000000)
		{
			l=10000000;
		}
		int ans=a[r]-a[l-1];
		cout<<ans<<endl;
	}


}