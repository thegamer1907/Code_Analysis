#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define fi first
#define se second
#define dbg(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<endl;
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
const int inf=0x3fffffff;
const ll mod=1000000007;
const int maxn=1e5+10;
int num[maxn];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    rep(i,1,n+1)
    {
        int t=0;
        rep(j,1,k+1)
        {
            int v;
            scanf("%d",&v);
            if(v)
            t|=(1<<(k-j));
        }
        num[t]++;
        //dbg(num[i]);
    }
    if(num[0]) return 0*puts("YES");
    if(num[(1<<k)-1]==n) return 0*puts("NO");
    for(int i=0;i<(1<<k);i++)
    {
        for(int j=0;j<(1<<k);j++)
        {
            if(num[i]&&num[j])
            {
                if((i&j)==0)
                    return 0*puts("YES");
            }
        }
    }
    puts("NO");
    return 0;
}











