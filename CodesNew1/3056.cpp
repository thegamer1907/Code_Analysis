#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define N 1000005
#define md ll(1e8)
#define ff first.first
#define fs first.second

string s = "";

int main(){
	
	ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	ll k;
	cin >> k;
	
	cin >> s;
	ll sz = s.size();
	vector <ll > sum(sz);
	sum[0] = int(s[0] == '1') ;
	for(int i = 1 ; i < sz ; i++ ){
		sum[i] = sum[i-1] + int(s[i] == '1');
	}
	pair< vector <ll > :: iterator , vector <ll > :: iterator > bound = {sum.begin() , sum.end()};
	
	if(sum[sz-1] < k){
		cout << 0 << endl;
		return 0;
	}
	
	ll ans = 0;
	ll x;
	for(int i = 0 ; i < sz ; i++){
		if(sum[i] < k) continue;
		x = sum[i] - k;
		bound = equal_range(sum.begin() , sum.begin() + i, x);
		//cout << i  << " " << sum[i]<<" " << bound.second - bound.first + int(x==0)<<endl;
		ans += bound.second-bound.first + int(x==0);
	}
	cout << ans <<endl;
	return 0;
	
}
