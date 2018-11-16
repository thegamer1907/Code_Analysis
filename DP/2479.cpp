#include <bits/stdc++.h>

using namespace std;

#define WAIT system("pause");

const int MOD = 1e9+7;
const int MAX = 1e5+10;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef long long ll;

#define F first
#define S second

ll dp[MAX];
ll sum[MAX];

int main(){
	ios_base::sync_with_stdio(0);
	
	int t,k;
	cin >> t >> k;
	
	dp[0] = 1;
	sum[0] = 1; 
	for(int i = 1; i < k; ++i){
		sum[i] = (sum[i - 1] + 1)%MOD;
		dp[i] = 1;
	}
				
	for(int i = k; i < MAX; ++i){
		dp[i] += (dp[i-1] + dp[i-k])%MOD;
		sum[i] = (sum[i-1] + dp[i])%MOD;
		//cout << "dp "<< i << " " << dp[i] << endl;
	}
	
	int a,b;
	while(t--){
		cin >> a >> b;
		cout << ((sum[b] - sum[a-1])%MOD + MOD)%MOD << endl;		
	}
	
//	WAIT
}