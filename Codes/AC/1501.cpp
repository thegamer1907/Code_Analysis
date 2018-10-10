#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define ft first
#define sd second
#define MAX 100010
using namespace std;
using pii = pair<int, int>;
//int+string
//cin.ignore();
using lli = long long int;
const int M = 1e9 + 7;
lli b;
int arr[MAX], n;
lli cost[MAX];

bool isOk(int k, lli &s) {
	int ct = 0;
	for (int i = 0; i < n; ++i)
	{
		cost[i] = (lli)arr[i] + lli(i + 1) * k;
	}
	sort(cost, cost + n);
	for (int i = 0; i < n && ct < k; ++i)
	{
		if (s + cost[i] <= b) {
			s += cost[i];
			ct++;
		}
	}
	return ct == k;
}

void solve() {
	cin >> n >> b;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int top = 0, bot = n;
	lli fc = INT_MAX;
	lli s = 0;
	while (bot - top > 1) {
		int mid = (top + bot) / 2;
		s = 0;
		if (isOk(mid, s)) {
			top = mid;
			fc = s;
		} else bot = mid - 1;
	}
	s = 0;
	if (isOk(top + 1, s)) {
		fc = s;
		++top;
	}
	if (fc == INT_MAX) fc = 0;
	cout << top << ' ' << fc << endl;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	solve();
	return 0;
}