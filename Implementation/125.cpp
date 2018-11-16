#pragma GCC optimize("Ofast")
#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <deque>
#include <algorithm>
#include <math.h>
#include <random>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define int long long
#define double long double
#define Matrix vector<vector<int> >
#define kektor vector
#define pii pair<int, int>
#define pp pair
#define all(x) x.begin(), x.end()
  
using namespace std;
  
typedef long long ll;                                                             
  
int RandInt(int min, int max) {
    if (max < min) {
        swap(min, max);
    }
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(min, max);
    return dist(mt);
}

const int maxn = 3e5 + 1, mod = 1e9 + 7, inf = 1e18;
int n, a, b;

void solve() {
	cin >> n >> a >> b;
	vector<int>	 cur;         
	for (int i = 1; i <= n; ++i) {
		cur.pb(i);
	}
	int ans = 0;
	while (cur.size() > 2) {
		vector<int> app;
		++ans;
		for (int i = 1; i < cur.size(); i += 2) {                                     
			if ((cur[i] == a && cur[i - 1] == b) || (cur[i] == b && cur[i - 1] == a)) {
				cout << ans; 
				return;
			} 
			if (cur[i] == a || cur[i] == b) {
				app.pb(cur[i]);
			} else if (cur[i - 1] == a || cur[i - 1] == b) {
				app.pb(cur[i - 1]);
			} else {				
				app.pb(cur[i]);
			}
		}
		cur.clear(); 
		for (auto i : app) {
			cur.pb(i); 
		}
	}
	cout << "Final!";
}         
  
signed main() {
    cout.precision(10);
    cout << fixed;
    ios_base::sync_with_stdio(false);
   	cin.tie(0);
    cout.tie(0);
    #ifdef offline
   		freopen("TASK.in", "r", stdin);
    	freopen("TASK.out", "w", stdout);
    #endif
    solve();
    return  0;
}
