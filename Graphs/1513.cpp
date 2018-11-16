#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define MAX 30001

int dp[MAX];
int An[MAX];
int main()
{
    int m,n;
    cin>>n>>m;
    for(int i=1; i<n; i++)
        cin>>An[i];
    for(int i=m+1; i<n; i++)
        dp[i]=-1;
    int count=0;
    dp[m]=1;
    for(int i=m-1; i>=1; i--)
    {
        int t=i+An[i];
        if(dp[t]==1)
            dp[i]=1;
        else
            dp[i]=-1;
        count++;
    }
    if(dp[1]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
