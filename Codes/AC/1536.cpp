#include <cstdio>
#include <algorithm>

using namespace std;
typedef long long ll;
ll n,s;
ll arr[101000];
ll tmp[101000];
typedef long long ll;
bool func(ll num){
	for(ll i = 1 ; i  <= n ; i++){
		tmp[i] = arr[i] + i*num;
	}
	sort(tmp+1,tmp+n+1);
	 ll sum = 0ll;
	for(ll i = 1;  i <= num ; i++){
		sum += tmp[i];
	}

	return sum <= s;

}
ll getsum(ll num){
	for(ll i = 1 ; i  <= n ; i++){
		tmp[i] = arr[i] + i*num;
	}
	sort(tmp+1,tmp+n+1);
	 ll sum = 0ll;
	for(ll i = 1;  i <= num ; i++){
		sum += tmp[i];
	}

	return sum;

}
int main(){
scanf("%lld %lld",&n,&s);
for(ll i = 1; i <= n ; i++){
	scanf("%lld",&arr[i]);
}

ll lo = 0;
ll hi = n+1;

while(lo <  hi){
	ll mid = (lo+hi)>>1;
	if(func(mid))
		lo = mid+1;
	else
		hi = mid;
}

printf("%lld %lld",lo-1,getsum(lo-1));

}