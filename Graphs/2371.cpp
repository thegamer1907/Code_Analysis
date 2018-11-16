#include<stdio.h>
int pre[2001];
int lvl[2001];
int main()
{
	int n,t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",pre+i);
	for(int i=1;i<=n;i++)
		if(pre[i]==-1)
			lvl[i]=1;
	for(int i=1;i<=n;i++)
	{
		do{
			t=i;
			if(lvl[t])
				break;
			while(lvl[pre[t]]==0)
				t=pre[t];
			lvl[t]=lvl[pre[t]]+1;
		}while(t!=i);
	}
	int max=0;
	for(int i=1;i<=n;i++)
		if(max<lvl[i])
			max=lvl[i];
	printf("%d\n",max);
	return 0;
}