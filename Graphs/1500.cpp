#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n, t;
	cin >> n >> t;
	vector<int> arr(n, 0);
	for (int i = 1; i < n; ++i) {
		cin >> arr[i];
	}
	int cur_city = 1;
	while (cur_city < n) {
		if (cur_city == t) {
			cout << "YES" << endl;
			return 0;
		} else {
			cur_city += arr[cur_city];
		}
	}
	if (cur_city == t) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}	
	return 0;
}