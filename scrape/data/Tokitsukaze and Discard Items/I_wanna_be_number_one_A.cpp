#include<bits/stdc++.h>
#define fu(i,r,t) for(int i=r;i<=t;i++)
#define fd(i,r,t) for(int i=r;i>=t;i--)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;
const int INF=1e17+5;
const int maxn=1e5+5;
int n,m,a[maxn],b[maxn],ans,sum;
int k,cnt,now;
int32_t main()
{
    IOS;
    cin>>n>>m>>k;
    fu(i,1,m)cin>>a[i];
    fu(i,1,m)
    {
        if (i==m or (a[i+1]-now-1)/k!=(a[i]-now-1)/k)
        {
            cnt++;
            now=i;
        }
    }
    cout<<cnt;
    return 0;
}