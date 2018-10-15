# include <bits/stdc++.h>
using namespace std;
int n,m,a[105];
int main()
{
	scanf("%d%d",&n,&m);
	int Max=0,Min=INT_MAX;
	int t,ans1,ans2;
	for (int i=1;i<=n;i++)  scanf("%d",&a[i]),Max=max(Max,a[i]);
	ans2=Max+m;
	while (m--) {
		Min=INT_MAX; int p=0;
		for (int i=1;i<=n;i++)
		 if (a[i]<Min) Min=a[i],p=i;
		a[p]++; 
	}
	Max=0;
	for (int i=1;i<=n;i++)
	 Max=max(Max,a[i]);
	printf("%d %d\n",Max,ans2); 
	return 0;
 } 
