#pragma GCC optimize("O2")
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#define pb push_back
#define pob pop_back
#define mp make_pair
#define PII pair<int , int>
#define PI 3.14159265
#define DO_NOT_USE_SCANF ios::sync_with_stdio(0)
#define PQ priority_queue
#define lowbit(x) ((x) & (-x))
#define DEBUG printf("Passing [%s] in LINE %d...\n" , __FUNCTION__ , __LINE__)

typedef long long ll;
using namespace std;

const int maxn = 200000 + 10;
inline void read(int &x) {
	int f = 1;
	x = 0;
	char ch = getchar();
	while(ch < '0' || ch > '9') {
		if(ch == '-') f = -1; ch = getchar();
	}
	while(ch >= '0' && ch <= '9') {
		x = x * 10 + ch - '0'; ch = getchar();
	}
	x *= f;
}

inline void readll(ll &x) {
	ll f = 1;
	x = 0;
	char ch = getchar();
	while(ch < '0' || ch > '9') {
		if(ch == '-') f = -1; ch = getchar();
	}
	while(ch >= '0' && ch <= '9') {
		x = x * 10 + ch - '0'; ch = getchar();
	}
	x *= f;

}

ll n , q;
ll a[maxn] , k , Prefix[maxn] , last , cur;

// Prefix wrong

// FenWick Tree right

void BinarySearch() {
	if(last + k < a[cur])  {
		last += k;
		return;
	}
	ll l = cur , r = n , ans = 0;
	while(l <= r) {
		ll mid = (l + r) >> 1;
		if(Prefix[mid] - Prefix[cur - 1] - last <= k) ans = mid , l = mid + 1;
		else r = mid - 1;
	}
	if(ans == n) {
		last = 0;
		cur = 1;
		return;
	}
	ans++;
	ll ttt = Prefix[ans] - Prefix[cur - 1] - last - k;
	last = a[ans] - ttt;
	cur = ans;
}
int main(){
	readll(n) , readll(q);
	for(ll i = 1;i <= n;i++) {
		readll(a[i]) , Prefix[i] = Prefix[i - 1] + a[i];
	}
	last = 0;
	//p = 0;
	cur = 1;
	for(ll i = 1;i <= q;i++) {
		readll(k);
		BinarySearch();
		//cout << cur << endl;
		printf("%I64d\n" , n - cur + 1);	
	}
	return 0;
}

