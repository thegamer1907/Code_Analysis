#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include<cmath>
#define ll long long
#define M
const double pi = acos(-1);
using namespace std;

ll read() {
	ll nm = 0, f = 1;
	char c = getchar();
	for(; !isdigit(c); c= getchar()) if(c == '-') f = -1;
	for(; isdigit(c); c = getchar()) nm = nm * 10 + c - '0';
	return nm * f;
}
ll ck, n;
bool check(ll x) {
	ll note = 0, p = n;
	while(p > 0) {
		note += min(p, x);
		p -= min(p, x);
		p -= p / 10;
	}
	return note >= ck;
}

int main() {
	n = read();
	ck = n / 2;
	if(n & 1) ck++;
	ll l = 1, r = n;
	while(l + 1 < r) {
		ll mid =(l + r) >> 1;
		if(check(mid)) r = mid;
		else l = mid;
	}
	if(check(l)) r = l;
	cout << r << "\n";
	return 0;
}
