#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int Tmax=65;
int h,m,s,x,y,sum[Tmax];
int main()
{
	int i;
	scanf("%d%d%d%d%d",&h,&m,&s,&x,&y);
	sum[h*5]=sum[m]=sum[s]=1;
	for(i=1;i<=60;i++)
	  sum[i]+=sum[i-1];
	if(x>y) swap(x,y);
	x*=5;y*=5;
	if(sum[y-1]-sum[x-1]==0) printf("YES");
	else if(sum[60]-sum[y-1]==0&&sum[x-1]==0) printf("YES");
	else printf("NO");
	return 0;
}
