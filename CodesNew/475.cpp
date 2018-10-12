#include"stdio.h"
#include"string.h"
#include"algorithm"
using namespace std;
int main()
{
	int m;
	int n;
	int aa[100005];
	while(~scanf("%d %d",&n,&m))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&aa[i]);
		}
		int q=0;
	 	int sum=0;
	 	int w=0,x=0;
		for(int i=0;i<n;i++)
		{
			sum+=aa[i];
			q++; 
			if(sum>m)
			{
				if(q>w)
				{
					w=q-1;
				}
				sum-=aa[x];
				q-=1;
				x++;
			}
			if(sum==m)
			{
				if(q>w)
				{
					w=q;
				}
				sum-=aa[x];
				q-=1;
				x++;
			}
			else
			{
				if(q>w) w=q;
			}
		}
		printf("%d\n",w);	
	}
	return 0;
} 
