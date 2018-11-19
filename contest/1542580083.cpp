//  
#include<bits/stdc++.h>
#define pb push_back 
#define mp make_pair
using namespace std;

const int maxn=200005;
typedef long long ll;

int n,m,ans;
vector<int>v;

int f[maxn];

int main()
{
	int i,j,k,T;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;++i)
	{
		int res=0;
		for(j=1;j<=k;++j)
		{
			res*=2;
			int t;
			scanf("%d",&t);
			res+=t;
		}
		if(!f[res])
		{
			v.pb(res);
		}
		f[res]++;
	}
	
	for(i=0;i<v.size();++i)
	{
		for(j=0;j<v.size();++j)
		{
			if((v[i]&v[j])==0)
			{
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
	
	
	return 0;
}
