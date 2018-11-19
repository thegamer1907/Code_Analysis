#include<stdio.h>
#include<iostream> 
#include <algorithm>
#include<string.h>
#include<vector>
#include<math.h>
#include<queue>
#include<set>
#define LL long long
#define INf 0x3f3f3f3f
using namespace std;
int KGCD(int a,int b){if(a==0)return b;if(b==0)return a;if(~a&1){ if(b&1) return KGCD(a>>1,b);else return KGCD(a>>1,b>>1) <<1; } if(~b & 1)  return KGCD(a, b>>1);  if(a > b) return KGCD((a-b)>>1, b);return KGCD((b-a)>>1, a);}  
int LCM(int a,int b){ return a/KGCD(a,b)*b; } 
int mm[20];
int main()
{
	int n,m,x;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		memset(mm,0,sizeof(mm));
		for(int i=1;i<=n;i++)
		{
			int t=0;
			for(int j=1;j<=m;j++)
			{
				scanf("%d",&x);
				t=t*2+x;
			}
			mm[t]=1;
		}
		int tt=pow(2,m);
		int flag=0;
		for(int i=0;i<tt;i++)
		{
			for(int j=0;j<tt;j++)
			{
				if(mm[i] && mm[j] && (i&j)==0)
				{
					printf("YES\n");
					flag=1;
					break;
				}
			}
			if(flag)
					break;
		}
		if(!flag)
			printf("NO\n");
	}
	return 0;
}