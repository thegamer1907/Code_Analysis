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
	int dir[5][2]={0,1,0,-1,1,0,-1,0};
	using namespace std;
	int KGCD(int a,int b){if(a==0)return b;if(b==0)return a;if(~a&1){ if(b&1) return KGCD(a>>1,b);else return KGCD(a>>1,b>>1) <<1; } if(~b & 1)  return KGCD(a, b>>1);  if(a > b) return KGCD((a-b)>>1, b);return KGCD((b-a)>>1, a);}  
	int LCM(int a,int b){ return a/KGCD(a,b)*b; } 
	int main()
	{
		char a[10];
		char b[105][10];
		int n,flag,flag1;
		while(scanf("%s",a)!=EOF)
		{
			scanf("%d",&n);
			for(int i=0;i<n;i++)
				scanf("%s",b[i]);
			flag=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if((b[i][0]==a[0]&&b[i][1]==a[1])||(b[i][1]==a[0]&&b[j][0]==a[1])||(b[i][0]==a[1]&&b[j][1]==a[0]))
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
		
	} 