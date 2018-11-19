#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<queue>
#include<algorithm>
#include<stack>
#include<cstring>
#include<vector>
#include<list>
#include<bitset>
#include<set>
#include<map>
#include<time.h>
using namespace std;
typedef long long ll;
const int mod=1e6;
const int maxn=100000+10;
int a[16];
int main()
{
	int n,k,x;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		int s=0;
	  for(int j=0;j<k;j++)
	  {
		scanf("%d",&x);
		s+=(x<<j);
	  }
	  a[s]++;
    }
    int flag=0;
    for(int i=0;i<(1<<k);i++)
    for(int j=0;j<(1<<k);j++)
    {
    	if(i&j)continue;
    	if(a[i]&&a[j])
    	flag=1;
	}
	if(flag)printf("YES\n");
	else printf("NO\n");
	return 0;
}