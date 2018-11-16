#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAXN = 1e5;
int arr[MAXN];


signed main() {
	ios_base::sync_with_stdio(false);
	int n, a, b;
	cin >> n >> a >> b;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) arr[i] = i;
	a--; b--;
	if (a > b) swap(a, b);
	int round = 0;
	while (arr.size() > 2) {
		round++;
		vector <int> tmp;
		for (int i = 0; i < (int)arr.size(); i += 2) {
			if (arr[i] == a && arr[i + 1] == b) {
				cout << round << endl;
				return 0;
			} else if (arr[i] == a or arr[i] == b) {
				tmp.push_back(arr[i]);
			} else if (arr[i + 1] == a or arr[i + 1] == b) {
				tmp.push_back(arr[i + 1]);
			} else {
				tmp.push_back(arr[i]);
			}
		}
		arr.clear();
		for (auto e : tmp) arr.push_back(e);
	}
	cout << "Final!" << endl;


	return 0;
}