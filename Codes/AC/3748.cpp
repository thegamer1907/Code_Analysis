#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

const int inf = 0x3c3c3c3c;
const ll infl = 0x3c3c3c3c3c3c3c3c;

int need[3], price[3], inven[3];

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	string str;
	cin >> str;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == 'B') need[0]++;
		if(str[i] == 'S') need[1]++;
		if(str[i] == 'C') need[2]++;
	}
	for(int i = 0; i < 3; i++) cin >> inven[i];
	for(int i = 0; i < 3; i++) cin >> price[i];
	ll money;
	cin >> money;
	ll l = 0, r = 1e13;
	while(l + 1 < r){
		ll m = (l + r) / 2;
		ll sum = 0;
		for(int i = 0; i < 3; i++){
			sum += 1LL * max(1LL * need[i] * m - inven[i], 0LL) * price[i];
		}
		if(sum <= money) l = m;
		else r = m;
	}
	printf("%lld", l);
	return 0;
}