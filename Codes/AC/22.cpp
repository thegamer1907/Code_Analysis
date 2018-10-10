#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;
int n,l,a[1010],maxn;
bool cmp(int aa,int bb){return aa>bb;}
double ans;
int main()
{
	scanf("%d%d",&n,&l);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n-1;i++) maxn=max(maxn,a[i]-a[i+1]);
	ans=(double)(maxn)/2.0;
	if (a[1]!=l) if ((double)(l-a[1])>ans) ans=(double)(l-a[1]);
	if (a[n]!=0) if ((double)(a[n])>ans) ans=(double)(a[n]);
	printf("%.10f",ans);
return 0;
}