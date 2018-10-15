#include <cstdio>
const int N=1e5+5;
int n,a[N];
bool check(long long x) {
	long long res=0;
	for(int i=1;i<=n;++i) {
		if(x<a[i]) return 0;
		res+=x-a[i];
	}
	return res>=x;
}
int main() {
	scanf("%d",&n);
	for(int i=1;i<=n;++i) scanf("%d",&a[i]);
	long long l=0,r=1e10,ans;
	while(l<=r) {
		long long mid=(l+r)>>1;
		if(check(mid)) ans=mid,r=mid-1;
		else l=mid+1;
	}
	printf("%I64d\n",ans);
	return 0;
}