#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, k; cin >> n >> k;

	int arr[16];
	memset(arr, 0, sizeof arr);
	
	for(int j = 0;j < n;j++) {
		int a = 0;
		for(int i = 0;i < k;i++) {
			int x; cin >> x;
			a |= (x << i);
		}
		arr[a]++;
	}
	
	for(int i = 0;i < (1 << k);i++) {
		for(int j = 0;j < (1 << k);j++) {
			if(i & j) continue;
			if(arr[i] && arr[j]) {
				cout << "YES\n";
				return 0;
			}
		}
	}
			
	cout << "NO\n";
	
	return 0;
}