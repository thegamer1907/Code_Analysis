#include <bits/stdc++.h>
using namespace std;
int n,m,ans,Max,i,a[10010];
int main()
{
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	int v=m;
    for(i=1;i<=n;++i) v-=a[n]-a[i]; 
    if(v<=0)
	cout<<a[n];
    else
	cout<<(v%n?a[n]+v/n+1:a[n]+v/n);
	cout<<" "<<a[n]+m;
	return 0;
}