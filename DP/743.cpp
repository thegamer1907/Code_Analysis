#include<bits/stdc++.h>
#include<string.h>
using namespace std;
long long int dp[100000];
int main()
{
    string s;
    cin>>s;
    int l=s.length(); long long int y;dp[0]=0;
    if(s[0]==s[1]){
        dp[1]=1;
    }
    else{
        dp[1]=0;
    }
    for(int i=2;i<=l-1;i++){
        if(s[i]==s[i-1]){
            dp[i]=1+dp[i-1];
        }
        else{
            dp[i]=dp[i-1];
        }
        
        
    }
    int k;
    cin>>k;
    while(k--){
        int a,b;
        cin>>a>>b;
        cout<<dp[b-1]-dp[a-1]<<endl;
        
        
        
        
    }
    
    
    
    
    
    
}