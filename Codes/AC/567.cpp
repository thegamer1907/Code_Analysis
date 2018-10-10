#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <string.h>
#include <iomanip> 
#include <ctime>
#include <regex>
#include <queue>
#include <unordered_map>
#define ll long long
#define mod 1000000007
#define vi vector<int>
#define F(i,n) for(int i = 0; i < n; i++)
#define scan(n) scanf("%d",&n)
#define pi 3.14159265359
using namespace std;
ll power(ll a, ll b, ll m) {
	if (b <= 0)return 1;
	ll res = 1;
	while (b) {
		if (b & 1)res = res*a % m;
		a = a*a % m;
		b >>= 1;
	}
	return res;
}

unsigned ll mulmod(unsigned ll a, unsigned ll b, unsigned ll m) {
	a = a % m;
	unsigned ll res = 0;
	while (b > 0) {
		if (b & 1)res = (res + a) % m;
		a = (a << 1) % m;
		b >>= 1;
	}
	return res;
}

unsigned ll power(unsigned ll a, unsigned ll b, unsigned ll m) {
	if (b == 0)return 1;
	ll res = 1;
	while (b) {
		if (b & 1)res = mulmod(res, a, m);
		a = mulmod(a, a, m);
		b >>= 1;
	}
	return res;
}

ll gcd(ll a, ll b) {
	if (a == 0)return b;
	return gcd(b%a, a);
}

bool millerTest(unsigned ll n, unsigned ll d) {
	unsigned ll a = 2 + rand() % (n - 4);
	unsigned ll x = power(a, d, n);
	if (x == 1 || x == n - 1)return true;

	while (d != n - 1) {
		x = mulmod(x, x, n);
		d <<= 1;
		if (x == 1)return false;
		if (x == n - 1)return true;
	}
	return false;
}

bool isPrime(unsigned ll n, int k) {
	if (n == 2 || n == 3)return true;
	if ((n & 1) == 0)return false;
	if (n <= 1)return false;

	ll d = n - 1;
	while ((d & 1) == 0)d >>= 1;

	F(i, k)if (!millerTest(n, d))return false;
	return true;
}


bool good(ll a) {
	int r = 0;
	while (a) {
		r += a % 10;
		a /= 10;
		if (r > 10)return 0;
	}
	return r == 10;
}
int main() {
	int k;
	scan(k);
	ll i = 1;
	while (k) {
		k -= good(i);
		i+=9;
	}
	printf("%ld", i - 9);
}