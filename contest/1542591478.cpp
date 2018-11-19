#include <cstring>
#include <list>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <bitset>
#include <cassert>
//#include <unordered_map>
//#include <unordered_set>

#define sz(s) (int)(s.size())
#define all(s) s.begin(),s.end()
#define mp make_pair
#define fname "_DeBuG_"
#define pb push_back
#define pf push_front
#define rep(it,s) for(__typeof(s.begin()) it=s.begin();it!=s.end();++it)
#define bit __builtin_popcountll
#define F first
#define S second
#ifdef WIN32
	#define I64d "%I64d"
#else
	#define I64d "%lld"
#endif
#define _ std::ios_base::sync_with_stdio(NULL);

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double eps = 1e-15;
const double pi = acos (-1.0);
const int P = 997;
const int INF = 2e9;
const int mod = 1e9 + 7;
const int N = 1e2 + 17;

string s;
int n;
string t[N];
map<char, bool>used1;
map<char, bool>used2;

main () { _
	#ifdef _DeBuG_
		freopen (fname".in", "r", stdin);
		//freopen (fname".out", "w", stdout);
	#endif
	cin >> s >> n;
	for (int i = 1; i <= n; ++i)
		cin >> t[i], used1[t[i][0]] = used2[t[i][1]] = true;
	for (int i = 1; i <= n; ++i)
		if (s == t[i])
			return cout << "YES", 0;
	cout << (used2[s[0]] && used1[s[1]] ? "YES" : "NO");
	#ifdef _DeBuG_
		cout << "\nTime Elapsed : " << clock () * 1.0 / CLOCKS_PER_SEC;
	#endif
	return 0;
}