#include<stdio.h>
#include<string.h>
using namespace std;
int a[4],b[16][4],cnt[16];
bool vist[20];
int main()
{
	int n,k,i,j,q,m,sum,max,flag;
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		for(i=0;i<16;i++)
			vist[i]=0;
		for(i=0;i<n;i++)
		{
			q=0;
			for(j=0;j<k;j++){
				scanf("%d",&a[j]);
				q+=(a[j]<<j);
			}
			vist[q]=1;
		}
		m=0;
		for(i=0;i<16;i++)
		{
			if(vist[i]==1){
				for(j=0;j<4;j++)
					b[m][j]=(i>>j)&1;
				m++;
			}
		}
		max=1<<m;
		for(i=1;i<max;i++)
		{
			for(j=0;j<4;j++)
				cnt[j]=0;
			sum=0;
			for(q=0;q<m;q++)
			{
				if((i>>q)&1==1)
				{
					for(j=0;j<4;j++)
						cnt[j]+=b[q][j];
					sum++;
				}
			}
			flag=1;
			for(j=0;j<4;j++)
				if(cnt[j]*2>sum)
					flag=0;
			if(flag==1)
				break;
		}
		printf("%s\n",flag? "YES":"NO");
	}
	return 0;
}