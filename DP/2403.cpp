#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef long long ll;
typedef double db;
typedef pair<int,int> P;
int n,k,cur,dat[150005];P res;

int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++) scanf("%d",&dat[i]);
	for(int i=1;i<=k;i++) cur+=dat[i];
	res.X=1;res.Y=cur;
	for(int i=1;i<=n-k;i++)
	{
		cur-=dat[i];cur+=dat[i+k];
		if(res.Y>cur) res.Y=cur,res.X=i+1;
	}
	printf("%d",res.X);
	return 0;
}