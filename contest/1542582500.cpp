#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define mod 1000000007
#define bitcount __builtin_popcountll
#define ll long long
#define pb push_back
#define pi pair<int,int>
#define pii pair<pi,int>
#define mp make_pair
int arr[35];
int main()
{
	int i,j,k,x;
	int n;
	sd(n);
	sd(k);
	for(i=1;i<=n;i++)
	{
		int temp=0;
		for(j=0;j<k;j++)
		{
			sd(x);
			if(x==1)
				temp+=(1<<j);
		}
		arr[temp]++;
	}
	for(i=0;i<=31;i++)
	{
		for(j=0;j<=31;j++)
		{
			if((i&j)==0 && arr[i]>0 && arr[j]>0)
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}