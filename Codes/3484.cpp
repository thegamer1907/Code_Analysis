#include<bits/stdc++.h>
using namespace std;
#define RI register int
typedef long long LL;
LL n;
int check(LL k) {
	LL hav=0,x=n;
	while(x) {
		if(k>x) hav+=x,x=0;
		else x-=k,hav+=k;
		x-=x/10;
	}
	return hav+hav>=n;
}
int main()
{
    scanf("%lld",&n);
    LL l=1,r=n,ans;
    while(l<=r) {
    	LL mid=(l+r)>>1;
    	if(check(mid)) r=mid-1,ans=mid;
    	else l=mid+1;
    }
    printf("%lld\n",ans);
    return 0;
}