/*In The Name of ALLAH*/
#include <bits/stdc++.h>
#define MAX 100011
#define mod 1000000007
const long long inf = 2000000007;
using namespace std;
int a[MAX],x,dp[MAX];
set<int> s;

int main(){ 
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
	int n,m;
	cin>>n>>m;
	for(int i = 0; i < n ; i++){
		cin>>a[i];
	}
	for(int i = n-1;i >= 0; i--){
		s.insert(a[i]);
		dp[i] = s.size();
	}
	while(m--){
		cin>>x;
		x--;
		cout<<dp[x]<<endl;
	}
	return 0;
}