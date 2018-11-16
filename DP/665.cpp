#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int m;
    cin>>s;
    cin>>m;
    int l,r;
    int dp[s.size()]={0};
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            dp[i]=dp[i-1]+1;
        }
        else{
            dp[i]=dp[i-1];
        }
    }
    for(int i=0; i<m; i++){
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<endl;
    }

return 0;
}
