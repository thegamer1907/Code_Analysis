#include <bits/stdc++.h>
typedef unsigned long long int ull;
typedef long long int ll;
using namespace std;
#define pb push_back
#define m_p make_pair
#define intmax 100000000001
#define max_n 10000001
#define modulo 1000000007
#define intchar_index(a) a-'0'
#define upperchar(a) a-'A'
#define lowerchar(a) a-'a'
#define summation(n) (n*(n+1))/2
ll mprime[max_n];
ll SPF[max_n];
ll prime[max_n]={0};
void sieve()
{
	ll i,j;
	for(i=1;i<=10000000;i++)
	SPF[i]=i;
	
	for(i=2;i*i<=10000000;i++)
	{
		if(SPF[i]==i)
		{
			for(j=i*i;j<=10000000;j+=i)
			if(SPF[j]==j)
			SPF[j]=i;
		}
	}
}
void factor(ll x)
{
	ll k;
	while(x!=1)
	{
			mprime[SPF[x]]+=1;
		
		k=SPF[x];
		x/=SPF[x];
		while(k==SPF[x])
		{
			x/=SPF[x];
		}
		
		
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	ll n,i,x,sum=0,len,m,l,r,k1,k2,j;
	sieve();
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		factor(x);
	}
	

	prime[0]=0;
	for(i=1;i<=10000000;i++)
	{
			sum+=mprime[i];
			prime[i]=sum;
	
	}
	
	
	
	
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>l>>r;
		if(l>10000000)
		{
			cout<<0<<endl;
			continue;
		}
		if(r>10000000)
		k1=10000000;
		else
		k1=r;
		cout<<prime[k1]-prime[l-1]<<endl;
		
	}
	
	
	
	
}