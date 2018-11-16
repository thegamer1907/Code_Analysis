#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr = vector<int>(n);
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int m = 0;
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			int count = 0;
			for(int k = 0; k < n; k++) {
				if(k >= i && k <= j) {
					if(arr[k] == 0) count++;
				} else count += arr[k];
			}
			m = max(m, count);
		}
	}
	cout << m << endl;
}
