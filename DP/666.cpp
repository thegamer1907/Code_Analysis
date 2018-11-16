// Harry Potter
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int m, dp[N]; char s[N];
pair<int, int> q[N];

int main(){
	cin >> (s + 1); cin >> m; int n = strlen(s + 1);
	for(int i = 1; i <= m; i ++)
		scanf("%d%d", &q[i].first, &q[i].second);
		
	for(int i = 2; i <= n; i ++)
		dp[i] = dp[i - 1] + (s[i] == s[i - 1]);
	
	for(int i = 1; i <= m; i ++){
		int l = q[i].first, r = q[i].second;
		
		cout << dp[r] - dp[l] << endl;
	}	
}
