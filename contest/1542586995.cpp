/******************************************
*    AUTHOR:         CHIRAG AGARWAL       *
*    INSTITUITION:   BITS PILANI, PILANI  *
******************************************/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

const int MAX=1e5+5;

int arr[MAX][4];
int mark[18];
int tmp[4];


int main() 
{
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		int tmpp=0;
		for(int j=1;j<=k;j++)
		{
			scanf("%d",&arr[i][j]);
			tmpp+=((1<<(j-1))*arr[i][j]);
		}
		//printf("%d\n",tmpp);
		mark[tmpp]=1;
	}
	int pos=(1<<k);
	for(int i=1;i<(1<<pos);i++)
	{
		int flg=0;
		int tot=0;
		for(int j=0;j<pos;j++)
		{
			if(i&(1<<j)&&!mark[j])
			{
				flg=1;
				break;
			}
			if(i&(1<<j))
			{
				tot++;
			}

		}
		if(flg)
		{
			continue;
		}
		for(int j=0;j<4;j++)
		{
			tmp[j]=0;
		}
		for(int j=0;j<pos;j++)
		{
			if(i&(1<<j))
			{
				for(int l=0;l<k;l++)
				{
					if(j&(1<<l))
					{
						tmp[l]++;
					}
				}
			}
		}
		int don=0;
		for(int j=0;j<k;j++)
		{
			if(tmp[j]>(tot/2))
			{
				don=1;
			}
		}
		if(!don)
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
