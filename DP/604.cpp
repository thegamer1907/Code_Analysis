#include <bits/stdc++.h>
using namespace std;

int di[10001];
int main() {
	// your code goes here
	string s;
	cin>>s;
	int dp[s.size()+1];
	dp[0] = 1;
	for(int i = 1;i<s.size();i++) {
		if(s[i] == s[i-1]) {
			dp[i] = dp[i-1] + 1;
		} else {
			dp[i] = dp[i-1];
		}
	}
	
	int n;
	cin>>n;
	for(int i = 0;i<n;i++) {
		int x, y;
		cin>>x>>y;
		cout<<dp[y-1] - dp[x-1]<<endl;
	}
}