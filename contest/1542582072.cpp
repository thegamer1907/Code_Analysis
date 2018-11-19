#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#define pyes {cout<<"yes";return 0;}
#define pno {cout<<"no";return 0;}
using namespace std;
int cnt[16],c2[4];
int n,k;
int a[4];
int main()
{
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++)
	{
		int mask=0;
		for (int j=0;j<k;j++)
		{
			int x;
			scanf("%d",&x);
			mask|=((1<<j)*x);
		}
		cnt[mask]++;
	}
	for (int i=1;i<(1<<(1<<k));i++)
	{
		int mask=(1<<k)-1,sz=0;;
		bool had=1;
		memset(c2,0,sizeof(c2));
		for (int j=0;j<(1<<k);j++)
		{
			if (!((1<<j)&i)) continue;
			if (!cnt[j]){had=0;break;}
			for (int p=0;p<k;p++)
			{
				if ((1<<p)&j) c2[p]++;
			}
			sz++;
		}
		for (int j=0;j<4;j++)
		{
			if (c2[j]*2>sz) had=0;
		}
		if (had) pyes;
	}
	pno;
}
/*
0000 0
0001 1
0010 2
0011 3
0100 4
0101 5
0110 6
0111 7
1000 8
1001 9
1010 10
1011 11
1100 12
1101 13
1110 14
1111 15
*/