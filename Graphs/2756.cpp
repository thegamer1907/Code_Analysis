#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef long long ll;
typedef pair<int,int> P;
int n,m,x,y,cnt[1005];

int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++)
		scanf("%d%d",&x,&y),cnt[x]++,cnt[y]++;
	for(int i=1;i<=n;i++)
		if(!cnt[i])
		{
			printf("%d\n",n-1);
			for(int j=1;j<=n;j++)
				if(i!=j) printf("%d %d\n",i,j);
			return 0;
		}
	return 0;
}