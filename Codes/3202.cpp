#include <cstdio>
#include <algorithm>
#include <cmath >
#define maxn 100010
using namespace std;
int a[maxn], n, fst[maxn];
int main()
{
	int i, ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",a+i);
	fst[0]=0x3f3f3f3f;
	for(i=0;i<n;i++)
	{
		fst[i]=ceil((1.0*a[i]-i)/n);
		if(fst[i]<fst[ans])ans=i;
	}
	printf("%d",ans+1);
	return 0;
}
