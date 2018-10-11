#include <bits/stdc++.h>
using namespace std;
long long B,S,C,nb,ns,nc,pb,ps,pc;
char hamburger[128];
long long cost(long long n){
	return max(n*B - nb,0ll)*pb + max(n*S - ns,0ll)*ps + max(n*C - nc,0ll)*pc;
}
int main(){
	long long r;
	scanf("%s",hamburger);
	scanf("%lld%lld%lld",&nb,&ns,&nc);
	scanf("%lld%lld%lld",&pb,&ps,&pc);
	scanf("%lld",&r);
	for(int i = 0; hamburger[i]; i++){
		if(hamburger[i] == 'B') B++;
		else if(hamburger[i] == 'S') S++;
		else C++;
	}
	long long lo = 0;
	long long hi = 1e13;
	long long mid;
	while(lo < hi){
		mid = (lo + hi + 1ll)/2ll;
		if(cost(mid) > r){
			hi = mid-1ll;
		}else{
			lo = mid;
		}
	}
	printf("%lld\n",lo);
	return 0;
}