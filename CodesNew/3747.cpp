#include<cstdio>
#include<algorithm>
using namespace std;
int a[105];
int main(){
	int n,m,maxx=0,s=0;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		maxx=max(a[i],maxx);
	}
	for(int i=1;i<=n;++i) s+=maxx-a[i];
	if(s>=m) printf("%d ",maxx);
	else printf("%d ",maxx+(m-s+n-1)/n);
	printf("%d",m+maxx);
	return 0;
}