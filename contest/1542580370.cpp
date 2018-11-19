#include<cstdio>
#include<algorithm>
using namespace std;
const int N=1e5+5;
struct data{
	int id,cnt;
	int can[5];
	bool friend operator <(data x,data y)
	{
		return x.cnt<y.cnt;
	}
}p[N];
int can[N],cnt[50],n,k;

void solve()
{
	int i;
	for(int i=1;i<=n;++i)	
		for(int j=1;j<=k;++j)
		{
			if(p[i].can[j])
				can[i]|=(1<<j);
			if(p[i].cnt==0)
			{
				puts("YES");
				return ;
			}
		}
	for(int i=1;i<=n;++i)	
		cnt[can[i]]++;
	int t=(1<<5);	
	for(int i=1;i<t-1;++i)
		for(int j=i+1;j<t-1;++j)
			if(cnt[i]&&cnt[j])
			{
				if((i&j)==0)//)//(1<<(k+1)))	
				{
					puts("YES");
					return ;
				}
			}
	puts("NO");		
}

int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=k;++j)
			scanf("%d",&p[i].can[j]),p[i].cnt+=p[i].can[j];
		p[i].id=i;
	}
	solve();
	return 0;	
}

