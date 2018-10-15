#include<bits/stdc++.h>
using namespace std;
int a[105],maxn,n,m;
void in(){scanf("%d%d",&n,&m);for(int i=1;i<=n;++i)scanf("%d",&a[i]);}
void ac()
{
	sort(a+1,a+1+n);maxn=a[n]+m;
	for(int i=1;i<=n;++i)m-=a[n]-a[i];
	if(m<0)printf("%d",a[n]);
	else printf("%d",a[n]+m/n+(bool)(m%n));
	printf(" %d",maxn);
}
int main(){in();ac();}



