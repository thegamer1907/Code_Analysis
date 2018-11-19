#include<bits/stdc++.h>
using namespace std;
int print(int x){
    if(x==1) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}
int dp[16];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int val=0;
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            if(x==1)
            val=val+(1<<j);
        }
        dp[val]++;
    }
    if(dp[0]>0)
        return print(1);
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
        if(i&j) continue;
        if(dp[i]>0&&dp[j]>0) return print(1);
        }
    }
    return print(0);
}