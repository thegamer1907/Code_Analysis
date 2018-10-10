#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s;
ll na, nb, nc, pa, pb, pc, n, ans, a, b, c;

bool check(ll m){
	ll x = max(0LL, m * a - na), y = max(0LL, m * b - nb), z = max(0LL, m * c - nc);
	return x * pa + y * pb + z * pc <= n;
}

int main(){
	cin >> s >> na >> nb >> nc >> pa >> pb >> pc >> n;
	for(int i = 0; i < s.size(); i++)                                 
		if(s[i] == 'B')
			a++;
		else if(s[i] == 'S')
			b++;
		else c++;
	ll l = 1, r = 1e13;
	while(l <= r){
		ll md = (l + r) >> 1;
		if(check(md)){
			ans = md;
			l = md + 1;
		}else r = md - 1;
	}
	cout << ans;
	return 0;
}