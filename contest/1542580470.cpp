/*Divyam Goyal - IIT-BHU*/
#include<bits/stdc++.h>
using namespace std;

#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define bitcount    __builtin_popcountll
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define ll long long
#define mp(a,b) make_pair(a,b)
#define F first
#define S second
#define pb(x) push_back(x)
#define MOD 1000000007
#define MAX 100005

int f[20];
int cnt[10];

int main()
{
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k;
	cin>>n>>k;

	for(int i=1;i<=n;i++)
	{
		int temp=0;
		for(int j=0;j<k;j++)
		{
			int x;
			cin>>x;
			if(x)
				temp=temp+(1<<j);
		}
		f[temp]=1;
	}


	int q=(1<<k);
	int r=(1<<q);

/*	for(int i=0;i<q;i++)
		trace2(i,f[i]);
*/
	for(int t=1;t<r;t++)
	{
		for(int i=0;i<k;i++)
			cnt[i]=0;
		int c=0;
		for(int i=0;i<q;i++)
		{
			if((t&(1<<i))&&f[i])
			{
				c++;
				for(int j=0;j<k;j++)
				{
					//trace2(t,i);
					if(i&(1<<j))
						cnt[j]++;
				}
			}
		}
		int imp=0;
		for(int i=0;i<k;i++)
		{
			if(cnt[i]>c/2)imp=1;
		}

		if(imp==0&&c)
		{
			//trace2(t,c);
			cout<<"YES";return 0;
		}
	}

	cout<<"NO";







    return 0;


}