#include<cstdio>
#include<algorithm>
const int maxn = 2*(1e5)+10;
int n,a[maxn];
int main() {
	scanf("%d",&n);
	for(register int i = 1;i<=n;++i) scanf("%d",&a[i]);
	int ans = 1,cur = 1;
	for(register int i = 2;i<=n;++i) {
		if(a[i]<=a[i-1]<<1) cur++;
		else {
			ans=std::max(ans,cur);
			cur=1;
		}
	}
	ans=std::max(ans,cur);
	printf("%d",ans);
	return 0;
}

