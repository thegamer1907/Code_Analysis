#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	
	int n = s.size(), q, x, y;
	s = '!' + s;
	// cin >> q;
	
	vector<int> dp(n+1, 0);
	int count = 0;
	for(int i=1; i<=n; i++) {
		dp[i] = dp[i-1];
		
		if(s[i] == s[i-1])
			dp[i]++;	
	}
	
	cin >> q;
	for(int i=0; i<q; i++) {
		cin >> x >> y;
		cout << dp[y] - dp[x] << endl;
	}
}