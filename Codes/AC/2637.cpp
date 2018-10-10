#include <bits/stdc++.h>

using namespace std;

const int MAXN=1e7;

long long p[MAXN+70],a,f[MAXN+70];

void criba()
{
	for(int i=4;i<=MAXN+5;i+=2)p[i]=2;
	for(int i=3;i*i<=MAXN+5;i+=2)
		if(!p[i])for(int j=i*i;j<=MAXN+5;j+=i<<1)p[j]=i;
}

void factor(long long n)
{
	while(p[n]!=0)
	{
		long long a = p[n];
		f[a]++;
		while(n%a==0)n/=a;
	}
	if(n>1)f[n]++;
}

#define endl '\n'

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	criba();

	int n;cin>>n;

	for(int i=1;i<=n;i++)
	{cin>>a;factor(a);}

	for(int i = 3; i<MAXN+6; i++)
		f[i] += f[i-1];

	int q;cin>>q;
	while(q--)
	{
		int a,b;cin>>a>>b;
		if(a>MAXN + 5)
		{
		    cout << 0 << endl;
		    continue;
		}
		if(b>MAXN + 5)b = MAXN + 5;
		cout << f[b] - f[a-1] << endl;
	}

	return 0;
}