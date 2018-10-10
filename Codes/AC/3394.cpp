#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<set>
#define LL long long
const int MaxN = 1e5;
const int Inf = 1 << 30;

bool check(LL n,LL x){
	LL a = 0,b = 0,pos;
	while(n > 0){
		if(n >= x){
			n -= x;
			a += x;
		}
		else a += n,n = 0;
		b += n / 10;
		n -= n / 10;
	}
	if(a >= b) return 1;
	else return 0;
}

int main(){
	LL n,l,r,mid,ans;
	while(~scanf("%I64d",&n)){
		l = 1;r = n;
		while(l <= r){
			mid = (l + r) >> 1;
			if(check(n,mid)){
				r = mid - 1;
				ans = mid;
			}
			else l = mid + 1;
		}
		printf("%I64d\n",ans);
	}
	return 0;
}