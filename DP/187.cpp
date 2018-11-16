#include <iostream>
#include <algorithm>
#include <set>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(b,b+m);
    int dp[n+1][m+1];

    for(int i=0;i<=m;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
            if (abs(a[i-1]-b[j-1])<=1){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        }
        cout<<dp[n][m];
}
