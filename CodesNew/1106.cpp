#include<cstdio>
#include<algorithm>
using namespace std;
long long l,mid,r,n;
bool check(long long k){
	long long tmp=n,s=0;
	while(tmp>=10&&tmp>=k){
		s+=k;
		tmp-=k;
		tmp-=tmp/10;
	}
	s+=tmp;
	return s*2>=n;
}
int main(){
	scanf("%lld",&n);
	r=(n+1)/2;
	while(l<r-1){
		mid=(l+r)/2;
		if(check(mid))r=mid;
		else l=mid;
	}
	printf("%lld",r);
}