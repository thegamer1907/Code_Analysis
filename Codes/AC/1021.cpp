//I_F_A
#include "bits/stdc++.h"
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n,k;
	cin >> n >> k;
	
	vector<long long> dp(n+1,0LL);
	for(long long i=1;i<=n;i++){
		
		char ch;
		cin >> ch;
		
		if(ch == 'b'){
			dp[i] = 1LL;
		}
		dp[i] = dp[i] + dp[i-1];
	}
	
	long long ans = 0;
	for(long long i=1;i<=n;i++){
		
		long long left = i , right = n;
		long long lans = i;
		
		while(left <= right){
			
			long long mid = (left + right) >> 1;
			
			long long AB = mid - i + 1;
			long long Bs = dp[mid] - dp[i - 1];
			long long As = AB - Bs;
			
			if(min(As,Bs) <= k){
				
				lans = mid;
				left = mid + 1;
			}	
			else{
				
				right = mid - 1;
			}
		}
		
		ans = max(ans , lans - i + 1);
	}
	cout << ans;
}