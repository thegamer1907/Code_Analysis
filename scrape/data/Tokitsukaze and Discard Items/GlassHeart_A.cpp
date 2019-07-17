#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;
#define LL long long
#define f(i,x,y) for (int i=x;i<=y;i++)
#define ff(i,x,y) for (int i=x;i<y;i++)
#define fi first
#define se second 

const int N = 2e5+10;
LL n,m,k,s;
LL a[N];
LL cnt;

	LL nowp = 1;
	LL nows = 0;
	
LL getl(LL x){
	LL l = nows+1,r=m;
	LL ret = 0;
	while (l<r){
		LL mid = (l+r)>>1;
		if (a[mid]>=x) ret = mid, r=mid-1;
			else l=mid+1;
	}
	return ret;
}
LL getr(LL x){
	LL l = nows+1,r=m;
	LL ret = 0;
	while (l<r){
		LL mid = (l+r)>>1;
		if (a[mid]<=x) l=mid+1,ret = mid;
			else r=mid-1;
	}
	return ret;
}

int main(){
	//freopen("in.txt","r",stdin);
	scanf("%I64d%I64d%I64d",&n,&m,&k);
	f(i,1,m) scanf("%I64d",&a[i]);
	s = n/k;
	if (s*k<n) s++;
	for (;;){
		if (nows==m) break;
		LL l,r;
		l = lower_bound(a+nows+1,a+m+1,nowp*k-k+1+nows)-a;
		r = upper_bound(a+nows+1,a+m+1,nowp*k+nows)-a-1;
		//l = getl(nowp*k-k+1+nows);
		//r = getr(nowp*k+nows);
		if (a[l]>nowp*k+nows) {
			nowp = (a[l]-nows)/k;
			while (nowp*k+nows>a[l]) nowp--;
			while (nowp*k+nows<a[l]) nowp++;
		}
			else nows+=r-l+1,cnt++;
	}
	printf("%I64d\n",cnt);
	return 0;
}