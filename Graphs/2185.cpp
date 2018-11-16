#include <iostream>
#include <string.h>
#include <algorithm>
#include <set>
#include <vector>
#include <climits>
#include <map>
#include <queue>
#include <math.h>
#include <iomanip>

#define sqr(A) ((A) * (A))
#define F first
#define S second
#define MP make_pair
#define bsz  __builtin_popcount
#define all(A) A.begin(), A.end()
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;
const int MOD2 = 1e9 + 9;
const int PR = 727;
const int INF = INT_MAX;
const ll LINF = LLONG_MAX;

const int N= 1e6;
int n, m, d[N];
bool visited[N];
queue<int> q;

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	memset(d, -1, sizeof d);
	cin >> n >> m;
	d[n] = 0;
	q.push(n);
	while (1) {
		int v = q.front(); q.pop();
		if (v == m) break;
		if (!visited[2 * v] && v < 2 * m) {
			q.push(2 * v);
			d[2 * v] = d[v] + 1;
			visited[2 * v] = 1;
		}
		if (!visited[v - 1] && v - 1 > 0) {
			q.push(v - 1);
			d[v - 1] = d[v] + 1;
			visited[v - 1] = 1;
		}
	}
	cout << d[m] << endl;
}




























