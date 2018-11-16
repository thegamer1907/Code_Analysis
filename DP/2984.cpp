#include <bits/stdc++.h>
using namespace std;
using lld = int64_t;
using PII = pair<int,int>;
using PIL = pair<int,lld>;
using PLI = pair<lld,int>;
using PLL = pair<lld,lld>;
#define PB push_back
#define FF first
#define SS second
// Let's fight~~~
const int N = 1000000 + 5;

int dp[N];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	string s1, s2; cin >> s1 >> s2;
	for(int i=1;i<=n;i++) {
		dp[i] = dp[i-1];
		if(s1[i-1] != s2[i-1]) {
			dp[i] = dp[i-1]+1;
			if(i >= 2) {
				if(s1[i-2]==s2[i-1] and s1[i-1]==s2[i-2]) {
					dp[i] = dp[i-2]+1;
				}
			}
		}
	}
	cout << dp[n] << '\n';
	return 0;
}