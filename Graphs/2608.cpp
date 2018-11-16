#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
using namespace std;

typedef pair<int, int> pii;


int n, m, temp;


int d[10004], p;

int g(int x) {
	if(d[x] == x) return x;
	return d[x] = g(d[x]);
}



int main() {
	ios_base::sync_with_stdio(false);
	for(int i = 0; i < 10004; ++i) d[i] = i;
	cin >> n ;
	for(int i = 1; i <= n; ++i) {
		cin >> p;
		d[g(i)] = d[g(p)];
	}
	int ans = 0;
	for(int i = 1; i <= n; ++i) if(g(i) == i) ++ans;
	cout << ans << endl;
	return 0;
}