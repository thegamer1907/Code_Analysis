#include<cstdio>
#include<algorithm>
#include<cstring>
#include<queue>
#include<iostream>
#define inf 1e9
#define MN
using namespace std;
int n,k,a[16],b[5];
int main()
{
	cin>>n>>k;
	while(n--)
	{
		for(int i=1;i<=k;i++)cin>>b[i];
		a[b[1]+b[2]*2+b[3]*4+b[4]*8]=1;
	}
	for(int i=0;i<(1<<k);i++)for(int j=0;j<(1<<k);j++)if((i&j)==0&&a[i]&&a[j]){puts("YES");return 0;}
	puts("NO");
	return 0;
}