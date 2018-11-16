#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int arr[1000001];
int main() {
	int n; cin >> n;
	int last = -1;
	int ans = 0;
	int temp = 0;
	for (int i = 0;i < n;++i) {
		cin >> arr[i];
		if (arr[i] > last) {
			++temp;

		}
		else {
			ans = max(ans,temp); temp = 1; 
		}
		last = arr[i];
	}
	ans = max(ans, temp);
	cout << ans;
	return 0;
}