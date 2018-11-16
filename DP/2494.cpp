#include <bits/stdc++.h>
 
using namespace std;
 
const int MOD=1e9+7;
const double PI=3.14159265359;




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t,k,n=100000;
    cin>>t>>k;
    
    
    
    vector<long long> dp(n+1);
    dp[1]=1+(k==1);
    dp[0]=1;
    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1]+(i>=k?dp[i-k]:0);
        dp[i]%=MOD;
        
    }
    vector<long long> cs(n+1);
    cs[0]=dp[0];
    for(int i=1; i<=n; i++){
        cs[i]=cs[i-1]+dp[i];
        cs[i]%=MOD;
    }
    
    while(t--){
        int x,y;
        cin>>x>>y;
        
        cout<<(cs[y]-cs[x-1]+MOD)%MOD<<endl;
        
    }
    
    
    
    
    
    
    return 0;
}