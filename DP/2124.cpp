#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstdio>
#include <fstream>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>

using namespace std;

typedef long long ll;
typedef pair <int, int> pii;

#define F first
#define S second
#define pb push_back
#define sz(a) (int)a.size()
#define all(a) a.begin(), a.end()

const int N = 2e6 + 123;
const int INF = 1e9 + 123;
const double EPS = 1e-9;

int n, m, a[N], dp[N];
multiset <int> ms;
set <int> st;

int main() {
	cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        ms.insert(a[i]);
        st.insert(a[i]);
    }
    int sz_st = sz(st);
    for(int i = 1; i <= n; ++i) {
        dp[i] = sz_st;
        ms.erase(ms.find(a[i]));
        if(ms.find(a[i]) == ms.end()) --sz_st;
    }
    for(int i = 1; i <= m; ++i) {
        int l;
        cin >> l;
        cout << dp[l] <<"\n";
    }
	return 0;
}
