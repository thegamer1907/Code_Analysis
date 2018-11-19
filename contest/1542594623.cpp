#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <deque>
#include <string>

#include <algorithm>
#include <numeric>

#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>

#define pb push_back
#define pbk pop_back
#define mp make_pair
#define fs first
#define sc second
#define all(x) (x).begin(), (x).end()
#define foreach(i, a) for (__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define len(a) ((int) (a).size())

#ifdef CUTEBMAING
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
#define eprintf(...) 42
#endif

using namespace std;

typedef long long int64;
typedef long double ld;
typedef unsigned long long lint;

const int inf = (1 << 30) - 1;
const int64 linf = (1ll << 62) - 1;

int main() {
#ifdef XCODE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s; cin >> s;
    int n; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
    	if (a[i] == s) {
    		puts("YES");
    		return 0;
    	}
    }
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
    		if (s[0] == a[i][1] && s[1] == a[j][0]) {
    			puts("YES");
    			return 0;
    		}
    	}
    }
    puts("NO");
    return 0;
}
