#include <bits/stdc++.h>
using namespace std;


bool prime[10000005];
int a[10000005];
int dp[10000005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++;
    }
    
    for(int i=2;i<=10000000;i++)
    {
        if(prime[i]==false)
        {
            for(int j=i;j<=10000000;j+=i)
            {
                prime[j]=true;
                if(a[j]!=0)
                    dp[i]=dp[i]+a[j];
            }
        }
    }
    //cout<<dp[2]<<" "<<dp[3]<<" "<<dp[5]<<" "<<dp[7]<<" "<<dp[11]<<endl;
    for(int i=1;i<=10000000;i++)
        dp[i]+=dp[i-1];
    
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l>10000000)
            cout<<0<<'\n';
        else if(l<=10000000 && r>=10000000)
            cout<<dp[10000000]-dp[l-1]<<'\n';
        else if(r<10000000)
            cout<<dp[r]-dp[l-1]<<'\n';
    }
    return 0;
}
