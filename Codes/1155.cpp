#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>
#include <climits>
#include <cstdlib>
 
const double Pi=acos(-1.0);
typedef long long LL;
 
#define Set(a, s) memset(a, s, sizeof (a))
#define Rd(r) freopen(r, "r", stdin)
#define Wt(w) freopen(w, "w", stdout)
 
using namespace std;
 
int n, m;
set<string> ss;

int main (int argc, char ** argv) {
	cin>>n>>m;
	string s;
	for (int i=0; i<n+m; i++) {
		cin>>s;
		ss.insert(s);
	}
	if ((n+m-ss.size())&1)
		puts(m>n ? "NO" : "YES");
	else
		puts(n>m ? "YES" : "NO");
	return 0;
}


