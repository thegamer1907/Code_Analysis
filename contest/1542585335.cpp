#include <cstdio>
using namespace std;
const int maxn=1e5+10;

int n,k;
bool know[maxn][4];
int state[maxn];
bool have[16];

int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		state[i]=0;
		for(int j=0;j<k;j++)
		{
			scanf("%d",&know[i][j]);
			state[i]+=know[i][j]<<j;
		}
		have[state[i]]=true;
		
		if (state[i]==0)
		{
			printf("YES\n");
			return 0;
		}
	}
	
	for(int i=1;i<(1<<k);i++)
	{
		for(int j=1;j<(1<<k);j++)
		{
			if ((i&j)==0 && have[i] && have[j])
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	
	printf("NO\n");
	return 0;
}