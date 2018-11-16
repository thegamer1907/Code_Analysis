#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iterator>
#include <ctime>
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iomanip>
#include <limits>
#include<functional>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
#include <numeric>
#define inf 0x7fffffff
#define pi acos(-1)
#define mem(a,b) memset(a,b,sizeof(a))
#define lowbit(x) ((x)&(-x))
#define lrtnb srand(unsigned(time(NULL)))
#define lrtlh ios::sync_with_stdio(0)
#define lowb(a,n,x) lower_bound(a,a+n,x) - a
#define uppb(a,n,x) upper_bound(a,a+n,x) - a
#define lson l,mid,i<<1;
#define rson mid+1,r,i<<1|1;
#define ALL(x) x.begin(),x.end()
#define INS(x) inserter(x,x.begin())
using namespace std;
typedef long long ll;
typedef long double ld;
typedef priority_queue<int> pqi;
typedef priority_queue<ll> pql;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef queue<int> qi;
typedef queue<ll> ql;
typedef stack<int> si;
typedef stack<ll> sl;
typedef set<int> Si;
typedef set<ll> Sl;
ll gcd(ll b, ll y) { return b > 0 ? gcd(y%b, b) : y; }
ll lcm(ll b, ll y) { return b * y / gcd(b, y); }
double dis(double x1, double x2, double y1, double y2) { double ans = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2); return sqrt(ans); }
double random(double start, double en) { return start + (en - start)*rand() / (RAND_MAX + 1.0); }
const int N = 100009;
int a[N];
int main() {
	int i, j, k, n, m, x, y;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	for (i = 1; i <= n; i++)
		a[i] += a[i - 1];
	x = 0;
	for (i = 1; i <= n; i++)
		for (j = i; j <= n; j++)
			x = max(x, a[i - 1] + (j - i + 1) - (a[j] - a[i - 1]) + a[n] - a[j]);
	printf("%d\n", x);
}