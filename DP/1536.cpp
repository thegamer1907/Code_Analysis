#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<map>
#include<cctype>
#include<vector>
#include<sstream>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
using namespace std;
int dp[200][200];
int main()
{
    int n;
    int a[200];
    cin>>n;
    int sum1=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum1+=a[i];
    }
    int sum=0,maxn=0,t,b=sum1,f;
    for(int i=0; i<n; i++)
    {
        b-=a[i];
        if(a[i]==0)
            dp[i][i]=1;
        else
            dp[i][i]=0;
        dp[i][i]+=sum+b;
        t=b;
        if(a[i]==0)
            f=1;
        else
            f=0;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]==0)
                f++;
            t-=a[j];
            dp[i][j]=f+t+sum;
            maxn=max(dp[i][j],maxn);
        }
        sum+=a[i];
        maxn=max(maxn,dp[i][i]);
    }
    cout<<maxn<<endl;
    return 0;
}
