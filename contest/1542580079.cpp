#include <bits/stdc++.h>

#define pii pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()
#define vec vector<int>

#define left not_right
#define y1 what

using namespace std;

const int N = (int) 250 + 10;
const int M = (int) 2e6 + 7;
const ll LINF = (ll) 1e18;
const int INF = (int) 1e6;
const double EPS = (double) 1e-9;

int n, m;
string st[N][2];

// 0 = pref
// 1 = suff

map<ll, bool> was[N][61], cur[61];
set<int> lst[N];

int main() {
    #define fn "balls"
    #ifdef witch
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
//        freopen(fn".in", "r", stdin);
//        freopen(fn".out", "w", stdout);
    #endif	
    srand(time(0));

    cin >> n;
    for (int i = 1; i <= n; i++) {
    	string st;
    	cin >> st;
    	for (int j = 0; j < sz(st); j++) {
    		for (int ptr = j, mask = 0; ptr < min(j + 8, sz(st)); ptr++) {
    			int len = ptr - j;
    			mask |= (st[ptr] == '1') * (1LL << len); 
    			was[i][len + 1][mask] = 1;
    		}
    	}
    	::st[i][0] = st.substr(0, min(sz(st), 60)); 
    	::st[i][1] = st.substr(max(0, sz(st) - 60));
    }
    cin >> m;
    for (int i = 1, a, b; i <= m; i++) {
    	cin >> a >> b;
    	st[i + n][0] = st[a][0];
    	int ptr = 0;
    	while (sz(st[i + n][0]) < 60 && ptr < sz(st[b][0])) {
    		st[i + n][0] += st[b][0][ptr];
    		ptr++;
    	}
    	ptr = 0;
    	string add = "";
    	while (sz(st[b][1]) + ptr < 60 && ptr < sz(st[a][1])) {
    		add += st[a][1][sz(st[a][1]) - 1 - ptr]; // add suff
    		ptr++;
    	}
    	reverse(all(add)); // reverse suff
    	st[i + n][1] = add + st[b][1];
    	for (auto it : lst[a]) {
    		lst[i + n].insert(it);
    	}
    	for (auto it : lst[b]) {
    		lst[i + n].insert(it);
    	}
    	lst[i + n].insert(a);
    	lst[i + n].insert(b);
    	//cout << st[b][0] << endl;
    	for (int suff = 1; suff <= 60 && suff <= sz(st[a][1]); suff++) {
			ll cur_mask = 0;
			int start = sz(st[a][1]) - suff;
			for (int ptr1 = start; ptr1 < sz(st[a][1]); ptr1++) {
				cur_mask |= (st[a][1][ptr1] == '1') * (1LL << (ptr1 - start));
			}
    		for (int pref = 1; suff + pref <= 60 && pref <= sz(st[b][0]); pref++) {
    			cur_mask |= (st[b][0][pref - 1] == '1') * (1LL << (suff + pref - 1));
    			was[i + n][pref + suff][cur_mask] = 1;
    		}
    	}
    	//cout << st[i + n][0] << ' ' << st[i + n][1] << endl;
    	ptr = 1;
    	while (true) {
    		bool ok = 1;
    		for (ll mask = 0; mask < (1LL << ptr); mask++) { 
    			if (was[i + n][ptr][mask]) 
    				continue;
    			bool fail = 1;
    			for (auto it : lst[i + n]) {
    				if (was[it][ptr][mask]) {
    					fail = 0;
    					break;
    				}
    			}
    			if (fail) {
    			//	cout << ptr << ' ' << mask << endl;
    				ok = 0;
    				break;
    			}
    		}
    		if (!ok) 
    			break;

    		++ptr;
    	}
    	cout << ptr - 1 << endl;
    }
    return 0;
}

