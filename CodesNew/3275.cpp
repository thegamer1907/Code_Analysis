#include <bits/stdc++.h>
using namespace std;
const int maxn = 111111;
long long a[maxn];
int main(){
	int n;
	scanf("%d",&n);
	long long sum=0;
	for(int i=0;i<n;i++)
		scanf("%lld",&a[i]),sum+=a[i];
	long long ans=sum/(n-1);
	if(sum%(n-1))
		ans++;
	for(int i=0;i<n;i++)
		if(ans<a[i])
			ans=a[i];
	printf("%lld\n",ans);
	return 0;
}
          