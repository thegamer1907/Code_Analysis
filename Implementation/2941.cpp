#include<bits/stdc++.h>
using namespace std;
#define fo(i,a,b)	for(int i=a;i<=b;i++)
#define fo_(i,a,b)	for(int i=a;i>=b;i--)
#define ll long long
#define M(a) memset(a,0,sizeof a)
#define M_(a) memset(a,-1,sizeof a)
#define pb push_back
const ll mod = 998244353;
#include<iostream>
#define ll long long
ll powmod(ll a, ll b) {ll res = 1; a %= mod; assert(b >= 0); for (; b; b >>= 1) {if (b & 1)res = res * a % mod; a = a * a % mod;} return res;}
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a;}
int a[100005];
int main() {
	int n, m, x;
	while (~scanf("%d", &n)) {

		for (int i = 1; i <= n; i++) {

			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		scanf("%d", &m);
		while (m--) {

			scanf("%d", &x);
			if (x < a[1]) {
				printf("0\n");
			} else if (x >= a[n]) {
				printf("%d\n", n );
			} else {
				int ans;
				int left = 1;
				int right = n;
				int mid;
				while (left <= right) {
					mid = (left + right) >> 1;
					if (a[mid] <= x) {
						ans = mid;
						left = mid + 1;
					} else {
						right = mid - 1;
					}
				}

				printf("%d\n", ans );
			}

		}
	}
	return 0;
}