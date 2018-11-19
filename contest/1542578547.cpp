#include <iostream>

using namespace std;

int dp[100001];
int another_dp[15];
bool exist[17];
int main() {
	int n, k;
	cin >> n >> k;
	
	for (int i=0;i < n; i++) {
		int jaritsu = 1;
		int val = 0;
		for (int j=0; j < k; j++, jaritsu *= 2) {
			int tmp;
			cin >> tmp;
			val += (tmp == 0 ? 1 : 0) * jaritsu;
		}
		dp[i] = val;
		exist[val] = true;
	}
	
	int target = (1 << k) - 1;
	// cout << target << endl;
	//dump
	// cout << "==============================" << endl;
	// for (int i=0; i < n;i++) {
	// 	cout << dp[i] << endl;
	// }
	// cout << "==============================" << endl;
	//dump
	
	// for (int i=0; i < n; i++) {
	// 	for (int j=i; j < n ;j++) {
	// 		if ( (dp[i] | dp[j]) == target) {
	// 			cout << "YES" << endl;
	// 			return 0;
	// 		}
	// 	}
	// }
	int ptr = 0;
	for (int i=0;i < 17; i++) {
		if (exist[i]) {
			another_dp[ptr++] = i;
		}
	}
	//another_dp_dump
	// for (int i=0;i  < ptr; i++) {
	// 	cout << another_dp[i] << endl;
	// }
	//another_dp_dump
	
	for (int i=0;i < ptr; i++) {
		for (int j=i ;j < ptr; j++) {
			if ( (another_dp[i] | another_dp[j]) == target) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}