#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int64_t n, k;
int arr[1000001];
int bad[160];

int _10[10] = { 1,10,100,1000,10000,100000,1000000,10000000 };

int main() {
	cin >> n;
	vector<int> ans;
	while (n)
	{
		int res = 0,t=n;
		for (int i = 7; i >= 0; --i) {
			res += ((t / _10[i] % 10)?1:0) * _10[i];
		}

		ans.push_back(res);
		n -= res;
	}

	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); ++i) cout << ans[i] << ' ';
	return 0;
}