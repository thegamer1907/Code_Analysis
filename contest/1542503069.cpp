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

int n, k;
bool in[20];

int main (int argc, char ** argv) {
	scanf("%d %d", &n, &k);
	for (int i=0; i<n; i++) {
		int x, b=0;
		for (int j=0; j<k; j++) {
			scanf("%d", &x);
			b+=x*(1<<j);
		}
		in[b]=true;
	}
	for (int i=0; i<16; i++) {
		for (int j=0; j<16; j++) {
			if (in[i] && in[j] && !(i&j)) {
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}


