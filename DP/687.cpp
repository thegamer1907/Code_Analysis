#include <iostream>
using namespace std;

const int maxn = 1e5 + 5;
int dp[maxn][2];

int main() {
	string s;
	cin >> s;
	dp[0][0] = dp[0][1]= 0;
	for(int i = 1; i < s.length(); i++) {
	    if(s[i] == '.' && s[i - 1] == '.') 
	        dp[i][0] = 1 + dp[i - 1][0];
	    else 
	        dp[i][0] = dp[i - 1][0];
	   if(s[i] == '#' && s[i - 1] == '#')
	       dp[i][1] = 1 + dp[i - 1][1];
	   else 
	       dp[i][1] = dp[i - 1][1];
	}
	int q;
	cin >> q;
	while(q--) {
	    int l, r;
	    cin >> l >> r;
	    --l, --r;
	    cout << ((l == 0) ? dp[r][0] + dp[r][1] : (dp[r][0] + dp[r][1] - dp[l][0] - dp[l][1])) << '\n';
	}
	return 0;
}
