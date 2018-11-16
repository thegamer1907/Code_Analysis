#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i;
    cin>>n>>m;
    map<int,int> tes;
    int dp[n+2], arr[n+2];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    dp[n]=0;
    for(i=n-1;i>=0;i--){
        dp[i] = dp[i+1];
        if(!tes[arr[i]]) {
            tes[arr[i]]=1;
            dp[i]++;
        }
    }
    for(i=0;i<m;i++){
        int b;
        cin>>b;
        cout<<dp[b-1]<<endl;
    }
}
