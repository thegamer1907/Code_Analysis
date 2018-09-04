#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+5;
typedef long long ll;
int a[MAXN];
int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	ll ans=1e18;
	int pos=0;
	for(int i=0;i<n;i++)
	{
		ll tmp=max(0,a[i]-i);
		if((i+tmp/n*n+(tmp%n>0)*n)<ans)
		{
			ans=(i+tmp/n*n+(tmp%n>0)*n);
			pos=i;
		}
	}
	printf("%d\n",pos+1);
	return 0;
}
