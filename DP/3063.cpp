#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int arr[n],c[n];
    int dp[n][4];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cin>>c[i];
    }
    for(i=0;i<n;i++){
        dp[i][1]=c[i];
        dp[i][2]=1000000009;
        dp[i][3]=1000000009;
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(arr[j]<arr[i]){
                //cout<<"a";
                dp[i][2]=min(dp[i][2],dp[j][1]+c[i]);
                dp[i][3]=min(dp[i][3],dp[j][2]+c[i]);
            }
        }
    }
    /*for(i=0;i<n;i++){
        cout<<dp[i][1]<<" "<<dp[i][2]<<" "<<dp[i][3]<<endl;
    }*/
    int mi=INT_MAX;
    for(i=0;i<n;i++){
        mi=min(mi,dp[i][3]);
    }
    if(mi!=1000000009 && mi!=INT_MAX){
        cout<<mi<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}