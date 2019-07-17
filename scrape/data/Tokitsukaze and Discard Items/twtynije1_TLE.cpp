#include<algorithm>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<string>
#include<queue>
#include<map>
#include<stack>
#include<iostream>
using namespace std;
#define INF 0x3f3f3f3f
#define NINF -INF-1
#define ll long long
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define lson rt<<1
#define rson rt<<1|1
#define Lson l,mid
#define Rson mid+1,r
const ll MAXN=2e7;
const ll mod=1e9+7;
ll a[MAXN];
int main()
{
    IOS;
    ll n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=m;++i)cin>>a[i];
    int x=(a[1]/k+1)*k,cnt=0,sum=1;
    for(int i=1;i<=m;++i)
    {
        if(a[i]<=x)
            cnt++;
        else
        {
            x+=cnt;
            cnt=1;
            while(x<a[i])
                x+=k;
            sum++;
        }
    }
    cout<<sum;
}
/*
12 6 4
1 2 5 6 11 12
*/