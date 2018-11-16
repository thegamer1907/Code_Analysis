#include <bits/stdc++.h>

using namespace std;

const int maxn=100;
int a[maxn];
int dp[maxn][maxn];

int main()
{
    int n, t=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1)
            t++;
    }
    if(t==n){
        cout<<n-1;
        return 0;
    }

    for(int i=0; i<n; i++){
        if(a[i]==0)
            dp[i][i]=1;
        else
            dp[i][i]=-1;
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]==0)
                dp[i][j]=dp[i][j-1]+1;
            else
                dp[i][j]=dp[i][j-1]-1;
        }
    }
    int maxx=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(dp[i][j]>maxx){
                maxx=dp[i][j];

            }
    cout<<maxx+t;


    return 0;
}
