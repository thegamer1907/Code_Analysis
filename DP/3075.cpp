#include<bits/stdc++.h>
using namespace std;




int main(){

    int n;
    cin>>n;
    long long s[n],c[n];
    int dd = 0;
    vector<long long> dp(n,-1);

    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
        cin>>c[i];

    long long ans = LONG_LONG_MAX,tmp;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(s[i]<s[j]){
                if(dp[j]>0){
                    if(dp[j] != LONG_LONG_MAX)
                        ans = min(ans,dp[j]+c[i]);
                }
                else {

                    tmp = LONG_LONG_MAX;
                    for(int k=j+1;k<n;k++){
                        if(s[j]<s[k])
                            tmp = min(tmp,c[j]+c[k]);
                    }
                    dp[j] = tmp;
                    if(tmp !=LONG_LONG_MAX)
                        ans = min(ans,dp[j]+c[i]);
                }
            }
        }
    }
    if(ans == LONG_LONG_MAX)
        cout<<-1;
    else
        cout<<ans;
    return 0;
}
