#define  _CRT_SECURE_NO_WARNINGS
#define f first
#define s second
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

const int INF = 1e+9;
long long n;

bool f(long long m) {
	long long c = n;
	long long V = 0, P = 0;
	while (c > 0) {
		V += min(m, c);
		c -= min(m, c);
		if (c - (c / 10) > 0) {
			P += (c / 10);
			c -= (c / 10);
		}
	}
	return V >= P;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long l = 1, r = 1e+18 + 1;
	cin >> n;
	while (l != r - 1) {
		long long mid = (l + r) / 2;
		if (f(mid))
			r = mid;
		else 
			l = mid;
	}
	if (f(l))
		cout << l;
	else
		cout << l + 1;
}