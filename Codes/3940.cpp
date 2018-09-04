#include <bits/stdc++.h>

#define ll long long
#define INF 1e13

using namespace std;


struct node{
	ll money,x,n;
}num[3];

ll m;

bool check(ll n){
	ll b = num[0].n * n - num[0].x;
	ll s = num[1].n * n - num[1].x;
	ll c = num[2].n * n - num[2].x;
	if(b < 0){
		b = 0;
	}
	if(s < 0){
		s = 0;
	}
	if(c < 0){
		c = 0;
	}
	ll t = b * num[0].money + s * num[1].money + c * num[2].money;
	return t <= m ? true : false;
}

ll binary_search(ll l,ll r){
	ll mid = l + r >> 1;
	ll ans;
	while(l <= r){
		mid = l + r >> 1;
		if(check(mid)){
			ans = mid;
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	return ans;
}

int main(){
	char ch[105];
	gets(ch);
	ll len = strlen(ch);
	for(ll i = 0;i < len;i++){
		if(ch[i] == 'B'){
			num[0].n++;	
		} else if(ch[i] == 'S') {
			num[1].n++;
		} else {
			num[2].n++;
		}
	}
	for(int i = 0;i < 3;i++){
		scanf("%lld",&num[i].x);
	}
	for(int i = 0;i < 3;i++){
		scanf("%lld",&num[i].money);
	}
	scanf("%lld",&m);
	printf("%lld\n",binary_search(0,INF));
}