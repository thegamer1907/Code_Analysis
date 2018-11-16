/*
Try to be a Rainbow in Someone's cloud.
*/
#include<bits/stdc++.h>
#define ll unsigned long long
#define rep(i,n,x) for(int i=x;i<n;i++)
#define rev_rep(i,n,x) for(int i=x;i>=n;i--)
#define fi first
#define se second
#define pb push_back
#define pi pair<int,int>
#define JUGAAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
/*void print(vector<string>v, ll n)
{
    rep(i,n,0)
        cout<<v[i]<<"\n";
}

int main()
{
    JUGAAD;
    int n, k, i, j, temp, cnt;
    cin>>n>>k;
    int a[n];
    rep(i,n,0)
        cin>>a[i];
    cnt=0;
    rep(i,n-1,0)
    {
        temp=a[i]+a[i+1];
        if(temp>=k)
        {
            continue;
        }
        else
        {
            a[i+1]+=(k-temp);
            cnt+=(k-temp);
        }
    }
    cout<<cnt<<"\n";
    rep(i,n,0)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
*/
int main()
{
    JUGAAD;
    char a[100005];
    int n, i, j, q, l, r;
    cin>>a;
    n=strlen(a);
    int dp[n];
    dp[0]=0;
    rep(i,n,1)
    {
        if(a[i]==a[i-1])
        {
            dp[i]=dp[i-1]+1;
        }
        else
        {
            dp[i]=dp[i-1];
        }
    }
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<"\n";
    }
    return 0;
}


