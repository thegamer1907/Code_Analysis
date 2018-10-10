#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
typedef long long ll;
map<int,ll> dp[4];
int a[maxn];
int main()
{
    ios::sync_with_stdio(false);
    int N,K;
    while(cin>>N>>K)
    {
        for(int i=0;i<4;i++)
            dp[i].clear();
        for(int i=0;i<N;i++)
            cin>>a[i];
        ll ans=0;
        for(int i=0;i<N;i++)
        {
            int x=a[i];
            if(x%K==0)
            {
                ans+=dp[2][x/K];
                dp[2][x]+=dp[1][x/K];
            }
            dp[1][x]+=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
