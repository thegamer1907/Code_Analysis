#include<cstdio>
#include<cstring>
#include<algorithm>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define reg register
typedef long long ll;
ll n;
#include<cmath>
inline bool check(ll k){
	static ll sum,res;sum=0;res=n;
	while(res){
		sum+=min(k,res);res-=min(res,k);
		res-=res/10;
	}
	return (sum<<1)>=n;
}
int main(){
	scanf("%I64d",&n);
	ll l=1,r=n>>1;
	while(l<r){
		static ll mid;mid=(l+r)>>1;
		if(check(mid))r=mid;
		else l=mid+1;
	}
	printf("%I64d\n",l);
	return 0;
}