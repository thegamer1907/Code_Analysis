#include <iostream>
using namespace std;

const int maxn = 1e5 + 5;
int dp[maxn];

int main() {
	string s;
	cin >> s;
	dp[0] = 0;
	for(int i = 1; i < s.length(); i++) 
	    dp[i] = (s[i] == s[i - 1]) ? 1 + dp[i - 1] : dp[i - 1];
	
	int q;
	cin >> q;
	while(q--) {
	    int l, r;
	    cin >> l >> r;
	    --l, --r;
	    cout << ((l == 0) ? dp[r] : (dp[r] - dp[l])) << '\n';
	}
	return 0;
}
