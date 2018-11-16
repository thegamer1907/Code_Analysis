#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>
#include <climits>
#include <iterator>
#include <iomanip>
#include <stack>
#include <set>
#include <cstdio>
#include <bitset>
#include <functional>
#include <tuple>
using namespace std;
const constexpr int INF = 1e9;
typedef pair<int, int> P;

#define FOR(i, a, n) for (ll i = (ll)a; i<(ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)

typedef long long ll;
typedef vector<int> VI;
const constexpr ll MOD = 1e9 + 7;
const int BITSIZE = 100010;

struct Less {
	bool operator()(const pair<int, int>& x, const pair<int, int>& y) const {
		return x.second < y.second;
	}
};
struct More {
	bool operator()(const pair<int, int>& x, const pair<int, int>& y) const {
		return x.first > y.first;
	}
};
//1-indexed
int bit[100010];

int bit_query(int i) {
	int res = 0;
	for (; i >= 1; i -= i & -i) res = max(res, bit[i]);
	return res;
}

void bit_set(int x, int v) {
	for (; x <= BITSIZE; x += x & -x) {
		bit[x] = max(bit[x], v);
	}
}

ll pow_mod(ll a, ll b){
    ll sum =1;
    while(b>0){
        if(b&1){
            sum *= a%MOD;
        }
        a = a* a%MOD;
        b >>= 1;
    }
    return sum;
}
int N, M; 
int a[30010];
int main() {
    int n, t; cin >> n >> t;
    for(int i=1; i<=n; ++i) cin >> a[i];
    
    int pos=1;
    bool f = false;
    while(1){
        if(pos==t){
            f=true;
            break;
        }else if(pos > t) break;
        pos = a[pos]+pos;
    }
    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;
	return 0;
}