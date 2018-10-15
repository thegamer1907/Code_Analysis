#include <cstdio>
using namespace std;
int a[110];
int main()
{
	int n,m;scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	int mx=0;for (int i=1;i<=n;i++) if (a[i]>mx) mx=a[i];
	int as=0;for (int i=1;i<=n;i++) as+=a[i];
	if (mx*n-as>=m) printf("%d ",mx);
	else {int x=m-(mx*n-as);printf("%d ",mx+(x-1)/n+1);}
	printf("%d\n",mx+m);
	return 0;
}