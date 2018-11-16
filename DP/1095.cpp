#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#define inf 0x3f3f3f3f
#define ll long long
using namespace std;
const int  maxn=1e5+10;
int ans=0,n,su[200];
void cl(int l,int r)
{
	int a[200];
	for(int i=1;i<=n;i++)
	a[i]=su[i];
	int sum=0;
	for(int i=l;i<=r;i++)
	a[i]=1-a[i];
	for(int i=1;i<=n;i++)
	if(a[i])sum++;
	ans=max(ans,sum);
	return ;
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&su[i]);
	for(int i=1;i<=n;i++)
	for(int j=i;j<=n;j++)
	cl(i,j);
	printf("%d",ans);
	return 0;
}
