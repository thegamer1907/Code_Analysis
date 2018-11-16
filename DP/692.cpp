#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<ll,ll>
#define mp make_pair
#define mod 1000000007

//vector<int> dp(100006,0);

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	string s;
	cin>>s;
	int n=s.length();
	vector<int> dp(n+1,0);
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1])
			dp[i+1]=1;
	}
	for(int i=1;i<=n;i++)
		dp[i]+=dp[i-1];
	int m;
	cin>>m;
	while(m--){
		int a,b;
		cin>>a>>b;
		cout<<dp[b-1]-dp[a-1]<<endl;
	}
	return 0;
}