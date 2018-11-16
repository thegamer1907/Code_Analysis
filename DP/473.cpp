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
		return x.first < y.first;
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

int GCD(int a, int b){
    if(a<b) swap(a, b);
    if(b==0) return a;
    return GCD(b, a%b);
}
int a[110];
int b[110];
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    int n, m; cin >> n;
    REP(i, n) cin >> a[i];
    cin >> m;
    REP(i, m) cin >> b[i];
    sort(a, a+n);
    sort(b, b+m);
    int ans=0;
    int pos=0;
    for(int i=0; i<n; ++i){
        while(pos!=m&&a[i]-b[pos]>1) {
            pos++;   
        }
        if(pos==m) break;
        if(abs(a[i]-b[pos])<=1){
            ans++;
            pos++;
            continue;
        }
        
    }
    cout << ans << endl;
	return 0;
}