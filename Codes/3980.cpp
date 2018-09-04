#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n,m,k,l,r;
    cin>>n>>m;
    long long a[n][m];
    long long dp[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int j=0;j<m;j++){
        dp[0][j] = 1;
        for(int i=1;i<n;i++){
            if(a[i][j]<a[i-1][j])
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i-1][j] + 1;
        }
    }


    int ins[n],mx=0;
    for(int i=0;i<n;i++){
        mx = 0;
        for(int j=0;j<m;j++){
            mx = max(dp[i][j],(long long)mx);
        }
        ins[i] = mx;
    }


    cin>>k;
    int dist = 0;
    for(int i=0;i<k;i++){
        cin>>l>>r;
        l--;
        r--;
        dist = abs(l-r) + 1;
        if(dist == 1)
            cout<<"Yes"<<endl;
        else {
                if(dist<=ins[r]){
                    cout<<"Yes"<<endl;
                }
                else
                    cout<<"No"<<endl;
        }


    }

    return 0;
}
