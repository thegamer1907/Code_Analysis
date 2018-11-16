#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define mod %MOD
const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int l=s.length();
    int dp[l+1];
    dp[1]=1;
    for(int i=1;i<l;i++){
        if(s[i]==s[i-1])
            dp[i+1]=dp[i]+1;
        else dp[i+1]=dp[i];
    }
    int m;
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        cout<<dp[r]-dp[l]<<"\n";
    }
}