#include <bits/stdc++.h>

using namespace std;

int dp[100005];

int main()
{
    string s;
    cin >> s;
    memset(dp,0,sizeof(dp));
    int i,n=s.length();
    for(i=0;i<n-1;i++){
        dp[i+1]=dp[i];
        if(s[i]==s[i+1])
            dp[i+1]+=1;
    }
    /*for(i=0;i<n;i++)
        cout << dp[i] << " " ;
    cout << endl;*/
    int query;
    cin >> query;
    int l,r;
    while(query--){
        cin >> l >> r;
        cout << dp[r-1]-dp[l-1] << endl;
    }
    return 0;
}