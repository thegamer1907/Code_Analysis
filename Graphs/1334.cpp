#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iomanip>
#include <bitset>
#include <fstream>
#include <utility>
#include <deque>

using namespace std;

#define ios ios_base::sync_with_stdio(false)
#define pb push_back
#define pob pop_back
#define p_q priority_queue
#define good inline

typedef long long ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair <int, int> pii;

const int MAXN = (int) 1e5;
int n, k, a[MAXN], pos = 1;

int main() {
	cin >> n >> k;
	for (int i = 1; i < n; i++)
		cin >> a[i];
	a[n] = 1;
	while (pos <= n) {
		if (pos == k) {
			cout << "YES" << '\n';
			return false;
		}
		pos += a[pos];
	}
	cout << "NO" << '\n';
	return false;
}