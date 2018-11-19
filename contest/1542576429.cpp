#include<bits/stdc++.h>
#define MAX 100005
#define mod 1000000007
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define inf 25
#define Mat vector<vector<int> >
#define int long long
#define coutd(a,b) cout<<fixed<<setprecision((b))<<(a)
const double root2 = 1.414213562;
const double pi = 3.141592653;

using namespace std;
int dp[20],arr[MAX][20];
main()
{
    std::ios::sync_with_stdio(false);
    int n,m,i,j,k,cur;
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>arr[i][j];
    for(i=0;i<n;i++)
    {
        cur=0;
        for(j=0;j<m;j++)
            cur+=arr[i][j]*(1<<j);
        dp[cur]=1;
    }
    for(i=0;i<(1<<m);i++)
        for(j=0;j<(1<<m);j++)
            if((i&j)==0 && dp[i]==1 && dp[j]==1)
            {
                cout<<"YES";
                return 0;
            }
    cout<<"NO";
    return 0;
}
