#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <queue>
#include <clocale>
#include <bitset>
#include <cstring>
#include <memory.h>
#include <numeric>
#include <iomanip>
#include <stack>

using namespace std;

#pragma comment (linker, "/STACK:667177216")
#define ll long long
#define LL long long
#define ull unsigned long long
#define ld long double
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define mp make_pair
#define pb push_back
const ll mod = 1000000007;
#define INF (int)(2e9)
#define LINF (ll)(4e18)
#define forit(mas) for(auto(it)=(mas).begin();(it)!=(mas).end();(it)++)
#define pii pair<int,int>


ll get(ll val) {
	ll sum = 0;
	while (val) {
		sum += val % 10;
		val /= 10;
	}
	return sum;
}

int main() {

#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<ll>a;
	for (ll i = 1; a.size() < 10000; i+=9) {
		if (get(i) == 10) a.pb(i);
	}
	ll n;
	cin >> n;
	cout << a[n - 1] << '\n';
	return 0; 
}