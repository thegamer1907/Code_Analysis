#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    bool a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int dp[n+1];
    for(int i=0;i<=n;i++) dp[i]=0;
    for(int i=1;i<=n;i++){
        if(a[i-1]==1){
            if(dp[i-1]>0) dp[i]=dp[i-1]-1;
            else dp[i]=dp[i-1];
        }
        else dp[i]=dp[i-1]+1;
    }
    int max1=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) max1++;
    }
    if(max1==n) max1--;
    int max=0;
    for(int i=0;i<=n;i++){
        if(dp[i]>max) max=dp[i];
    }
    cout<<max1+max<<endl;
    return 0;
}
