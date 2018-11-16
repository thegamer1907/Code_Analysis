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
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    
    int n; cin >> n;
    bool f=false;
    REP(i, n){
        cin >> a[i];
        if(a[i]==0) f=true;
    }
    if(!f){
        cout << n-1 << endl;
        return 0;
    }
    int aa[110][110]={0};
    for(int i=0; i<n; ++i){
        for(int j=i; j<n; ++j){
            if(a[j]==0) aa[i][j+1] = aa[i][j]+1;
            if(a[j]==1) aa[i][j+1] = aa[i][j]-1;
        }
    }
    int maxV=0;
    for(int i=0; i<110; ++i){
        for(int j=0; j<110; ++j){
            maxV=max(maxV, aa[i][j]);
        }
    }
    int cnt=0;
    for(int i=0; i<n; ++i){
        if(a[i]==1) cnt++;
    }
    cout << maxV+cnt << endl;
	return 0;
}