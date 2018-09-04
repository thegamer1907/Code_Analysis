#include<bits/stdc++.h>
using namespace std;
const int N=1e6+100;
int dp[N];
int main(){
    string s;
    cin>>s;
    if(s.size()<=2){
        cout<<"Just a legend"<<endl;
        return 0;
    }
    memset(dp,0,sizeof dp);
    int l=0;
    dp[0]=0;
    for(int i=1;i<s.size();i++){
        //cout<<s[i]<<' '<<s[l]<<endl;;
        while(s[i]!=s[l] && l>0)l=dp[l-1];
        //cout<<i<<' '<<l<<' '
        if(s[i]==s[l])l++;
        dp[i]=l;
    }
    //for(int i=0;i<s.size();i++)cout<<dp[i]<<' ';cout<<endl;
    int mx=0;
    for(int i=1;i<s.size()-1;i++){
        mx=max(mx,dp[i]);
    }
    int ll=dp[s.size()-1];
    //cout<<ll<<endl;
    while(ll>0 && mx<ll){
        //cout<<ll<<' '<<mx<<' '<<dp[ll-1]<<endl;
        ll=dp[ll-1];
    }
    //cout<<ll<<' '<<mx<<endl;
    if(ll>0){
        for(int i=0;i<ll;i++)cout<<s[i];cout<<endl;
    }else cout<<"Just a legend"<<endl;
}
