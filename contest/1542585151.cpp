#include<cstdio>

int n,k;
int v[4];
bool type[1<<4];
bool test[1<<4];
int prob[4],tp;
bool make;

bool valid(int p)
{
	for(int i=0;i<k;i++) prob[i]=0; tp=0;

	for(int x=0;x<(1<<k);x++)
	{
		test[x]=(p>>x)&1;
		if(test[x]&&!type[x]) return false;

		if(test[x])
		{
			for(int i=0;i<k;i++) prob[i]+=((x>>i)&1);
			tp++;
		}
	}

	for(int i=0;i<k;i++) if(2*prob[i]>tp) return false;

//	printf("%d : ",tp);
//	for(int i=0;i<k;i++) printf("%d ",prob[i]);
//	printf("\n");

	return true;
}

int main()
{
	scanf("%d%d",&n,&k);

	for(int x;n>0;n--)
	{
		x=0;
		for(int i=0;i<k;i++)
		{
			scanf("%d",v+i);
			x=x*2+v[i];
		}
		type[x]=true;
	}

//	for(int x=0;x<(1<<k);x++) printf("%d ",type[x]);
//	printf("\n");

	for(int p=1;p<(1<<(1<<k))&&!make;p++) if(valid(p))
	{
		make=true;

//		for(int x=0;x<(1<<k);x++) printf("%d ",(p>>x)&1);
	}

	make?puts("YES"):puts("NO");

	return 0;
}
