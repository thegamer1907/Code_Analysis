#include<bits/stdc++.h>
using namespace std;
int dp[5];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=3;++j){
            int x;cin>>x;
            dp[j]+=x;
        }
    }
    for(int i=1;i<=3;++i){
        if(dp[i]!=0){cout<<"NO";return 0;}
    }
    cout<<"YES";
    
    return 0;
}