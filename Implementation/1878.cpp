#include <bits/stdc++.h>

using namespace std;

int arr[101][3];

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		arr[i][0] = x;
		arr[i][1] = y;
		arr[i][2] = z;
	}
	
	for(int i=0; i<3; i++) {
		int total = 0;
		for(int j=0; j<n; j++) {
			total += arr[j][i];
		}
		if(total!=0) { cout << "NO" << '\n'; return 0; }
	}
	
	cout << "YES" << '\n';
	
	return 0;
	
}