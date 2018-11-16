#include<bits/stdc++.h>
#define ll unsigned long long
#define F first
#define S second
#define pb push_back
#define maxn 100009
#define mod 1000000007
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF 10000000000000000ll
#define INM -INF
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()

using namespace std;

int dp[maxn];

int main(){
	
	fast
	
	string s;
	cin >> s;
	for(int i = 1; i < sz(s); i++){
		dp[i + 1] = dp[i];
		if(s[i] == s[i - 1]){
			dp[i + 1]++;
		}
	}
	int q;
	cin >> q;
	while(q--){
		int l, r;
		cin >> l >> r;
		cout << dp[r] - dp[l] << "\n";
	}
}












































