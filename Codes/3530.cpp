//hi
#include<bits/stdc++.h>
using namespace std;
#define PB push_back
#define MP make_pair
#define F first
#define S second
typedef long long int LL;
LL n;
bool check(LL x){
	LL m=n;
	LL a=0, b=0;
	while(m){
		if(m>=x){ 
			a+=x;
			m-=x;
		}else{
			a+=m;
			m-=m;
		}
		if(m>=10){
			b+=m/10;
			m-=m/10;
		}
	}
	//printf("%lld %lld %lld\n",a,b,x);
	if(2*a>=n) return true;
	return false;
}
int main(void){
    scanf("%lld",&n);
    LL l=1, r=n;
    while(l!=r){
		LL mid=(l+r)/2;
		if(check(mid)) r=mid;
		else l=mid+1; 
	}
	printf("%lld\n",l);
    return 0;
}
