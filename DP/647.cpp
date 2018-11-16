#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * author: Kruti_20
 */
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int dp[s.length()];
    dp[0]=0;
    for(int i=1;i<s.length();i++) {
        if(s[i]==s[i-1]) dp[i]=dp[i-1]+1;
        else dp[i]=dp[i-1];
    }
    int m;
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<"\n";
    }

    return 0;
}

