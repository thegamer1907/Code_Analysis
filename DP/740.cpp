#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int t;
    cin>>t;
    int *dp=new int[str.size()];
    dp[0]=0;
    for(int i=1;i<str.size();i++)
    {
        if(str[i]==str[i-1])
            dp[i]=dp[i-1]+1;
        else
            dp[i]=dp[i-1];
    }
    while(t--)
    {
        int l, r;
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<endl;
    }
}
