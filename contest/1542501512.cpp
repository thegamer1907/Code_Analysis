#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define se second
#define fr first
#define mod 1000000007
#define endl "\n"

signed main()
{
   // freopen("input.txt","r",stdin);
    //freopen("output1.txt","w",stdout);
    int n,k;
    cin>>n>>k;
    int dp[n][k];
    set<int> s;
    set<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cin>>dp[i][j];
        }
        int cnt=0;
        int ans=0;
        for(int j=k-1;j>=0;j--)
        {
            if(dp[i][j]==1)
            ans+=pow(2,cnt);
            cnt++;
        }
        s.insert(ans);
    }
    int flag=0;
    int flag2=0;
    for(it=s.begin();it!=s.end();it++)
    {
        int u=(*it);
        if(u==0)
        {
            flag2=1;
            break;
        }
        for(int j=0;j<=16;j++)
        {
            flag=0;
            for(int l=0;l<=3;l++)
            {

                if(u&(1<<l))
                {
                    if((j&(1<<l))==0)
                        flag=1;
                    else
                        flag=0;
                    if(flag==1)
                        continue;
                    else
                        break;
                }
            }
            if(flag==1)
            {
                if(s.find(j)!=s.end())
                {
                    flag2=1;
                }
            }
        }
    }
    if(flag2==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}
