#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <tuple>
#include <utility>
#include <algorithm>
#include <bitset>

#define SZ(x) ((int)x.size())
#define SQ(x) ((x)*(x))
#define ALL(x) (x).begin(), (x).end()
#define PB push_back
#define Fi first
#define Se second

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> VI;
typedef vector<VI> VVI;

int k;

int main() {
	scanf("%d", &k);
	for(int n=1;;n++) {
		int t = n, s = 0;
		while(t) s += t % 10, t /= 10;
		if(s == 10 && --k == 0) { printf("%d", n); break; }
	}
	return 0;
}