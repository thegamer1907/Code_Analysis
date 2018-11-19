#include <string>
#include <vector>
#include <map>
#include <list>
#include <iterator>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
#include <stack>
#include <deque>
#include <cmath>
#include <memory.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
#include <unordered_map>
#include <cctype>
#include <algorithm>
#include <utility>
#include <assert.h>
#include <time.h>
#define sz(s) (int)s.size()
#define fs first
#define int long long
#define sc second
#define forn(i, k, n) for(int i = k; i < (int)n; ++i)
#define forc(i, k, n) for(int i = k - 1; i >= (int)n; --i)
#define pb push_back
#define mp make_pair
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

const int INF = 1e9;

//#define FILE

int32_t main() {
#ifdef FILE
    freopen("s.in", "r", stdin);
    freopen("s.out", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> v(n);
    forn(i, 0, n) {
    	cin >> v[i];
    }
    bool f = false;
    forn(i, 0, n) {
		string s3 = v[i] + v[i];
		forn(k, 1, s3.size()) {
    			if(s3[k] == s[1] && s3[k - 1] == s[0]) f = true;
		}
    	forn(j, 0, n) {
    		if(i == j) continue;
    		string s1 = v[i] + v[j];
    		string s2 = v[j] + v[i];
    		string s4 = v[j] + v[j];
    		forn(k, 1, s1.size()) {
    			if(s1[k] == s[1] && s1[k - 1] == s[0]) f = true;
    			if(s2[k] == s[1] && s2[k - 1] == s[0]) f = true;
    		}
    		forn(k, 0, s4.size()) {
    			if(s4[k] == s[1] && s4[k - 1] == s[0]) f = true;
    		}
    	}
    }
    f ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}