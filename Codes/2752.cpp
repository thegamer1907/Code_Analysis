#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdio>
#include <functional>
using namespace std; 
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
const int INF = (((1<<30)-1)<<1)+1;
const int nINF = 1<<31;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<char, int> pci;

/////////////////////////////////////////////////////////////////////

const int N = 1e6+1;
int z[N];

int main() {
    ios::sync_with_stdio(false);
    //cout << fixed << setprecision(7);
    string s;
    cin >> s;
    int n = s.size();
	int l = 0, r = 0;
	FOR(i, 1, n-1) {
		if(i > r) {
			l = r = i;
			while (r < n && s[r-l] == s[r]) r++;
			z[i] = r-l; r--;
		} else {
			int k = i-l;
			if(z[k] < r-i+1) z[i] = z[k];
			else {
				l = i;
				while (r < n && s[r-l] == s[r]) r++;
				z[i] = r-l; r--;
			}
		}
	}
	set<int, greater<int>> poss;
	int best = 0;
	FORD(i, n-1, 1) {
		if(poss.lower_bound(z[i]) != poss.end()) best = max(best, *poss.lower_bound(z[i]));
		if(z[i] + i == n) poss.insert(z[i]);
	}
	cout << (best ? s.substr(0, best) : "Just a legend") << endl;

    return 0;
}