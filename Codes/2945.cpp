/// ANTI_LIGHT ///

#include <bits/stdc++.h>

using namespace std;

#define int long long int 
#define f first
#define s second

typedef pair<int,int> pii;

const int MOD=1e9+7;
const int maxn=1e6+100;
int a[maxn+100];
int base=50;
pii ans[10];
int solve[maxn+100];
char s[maxn];

main()
{
	ios_base::sync_with_stdio(false);
	
	string s;
	cin>>s;
	int n=s.size();

	solve[1]=base;
	for(int i=2;i<=maxn;i++)
		solve[i]=(solve[i-1]*base)%MOD;

	a[0]=s[0]-'a'+1;
	for(int i=0;i<=n-1;i++)
	{
		int m=s[i]-'a'+1;
		a[i]=(a[i-1]*base+m)%MOD;
	}

	for(int i=n-2;i>=0;i--)
	{
		int p=a[i];
		int t=(a[n-1]-(a[n-i-2]*solve[i+1])%MOD+MOD)%MOD;

//		cout<<p<<" "<<t<<endl;
		if(p==t)
		{
			int l=1;
			for(int j=i+1;j<n-1;j++)
			{
				int h=(int)(a[j]-(a[l-1]*solve[j-l+1])%MOD+MOD)%MOD;
				if(h==p)
				{
					for(int k=0;k<=i;k++)
						cout<<s[k];
					return 0;
				}
				l++;
			}
		}
	}

	cout<<"Just a legend";




	return 0;
}



