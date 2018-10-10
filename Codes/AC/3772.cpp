#include <bits/stdc++.h>

using namespace std;

#define N 202

typedef long long ll;

ll n, need[3], have[3], price[3], r;
string s;

bool check(ll qtd){
	
	ll q[3];
	for(ll i=0; i<3; i++) q[i] = need[i]*qtd;
	
	ll sum = 0;
	for(ll i=0; i<3; i++) sum+= max(0LL, (q[i]-have[i]))*price[i];
	return sum<=r;
}


ll busca(){

	ll ini=0, fim=1e14, meio, ans;
	
	while(ini<=fim){
		meio = (ini+fim)>>1;
		
		if(check(meio)){
			ans = meio;
			ini = meio+1;
		}else fim = meio-1;
	}
	return ans;
}


int main(){
	
	cin >> s;
	for(char c : s){
		ll id = (c=='B' ? 0 : (c=='S' ? 1 : 2) );
		need[id]++;
	}
	for(ll i=0; i<3; i++) scanf("%lld", &have[i]);
	for(ll i=0; i<3; i++) scanf("%lld", &price[i]);
	scanf("%lld", &r);
	
	printf("%lld\n", busca());
	
}
