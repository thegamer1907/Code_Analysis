#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <iomanip>
#include <cassert>
#include <time.h>

#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define nn "\n"
#define pp " "

using namespace std;

typedef long long ll;
typedef long double ld;

ll n, a, b;

ll w(ll l, ll r){
	ll ra = 1;
	ll x = 2;
	while (x < (r - l) + 1){
		x *= 2;
		ra++;
	}
	return ra;
}

ll f(ll l, ll r){
	if (a <= (l + r) / 2 && b > (l + r) / 2){
		return w(l, r);
		exit(0);
	}
	else {
		if (a <= (l + r) / 2 && b <= (l + r) / 2){
			f(l, (l + r) / 2);
		}
		else {
			f((l + r) / 2 + 1, r);
		}
	}
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> a >> b;
	if (a > b){
		swap(a, b);
	}
	ll x;
	ll r = 2;
	ll ans = f(1, n);
	if(ans == w(1, n)){
		cout << "Final!";
	}
	else {
		cout << ans;
	}
}