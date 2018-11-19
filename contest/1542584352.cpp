#include<cstdio>
#include<cstring>
int cnt[20];
int n,k;

int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1; i<=n; i++)
	{
		int p=0;
		for(int j=1; j<=k; j++)
		{
			int c; scanf("%d",&c);
			p=p*2+c;
		}
		cnt[p]++;
	}
	bool fd=false;
	int lim=(1<<k);
	for(int i=1; i<(1<<lim); i++)
	{
		int d[20]; memset(d,0,sizeof(d));
		bool val=true;
		int tcnt=0;
		for(int j=0; j<lim; j++) if(i&(1<<j))
		{
			if(!cnt[j]) val=false;
			tcnt++;
			for(int tmp=0; tmp<k; tmp++)
				if(j&(1<<tmp)) d[tmp]++;
		}
		if(val)
		{
			bool ok=true;
			for(int j=0; j<k; j++)
				if(d[j]*2>tcnt) ok=false;
			if(ok) fd=true;
		}
	}
	printf(fd ? "yes\n" : "no\n");
	return 0;
}
