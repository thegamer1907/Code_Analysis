#include<bits/stdc++.h>
using namespace std;
using LL = int64_t;
const int maxn=1e6+5;
const int mod=1e9+7;
const int INF=0x3f3f3f3f;
const LL LLINF=1e14;
const double pi=acos(-1.0);
int vis[maxn];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    int now=0;
    for(int i=1;i<=n;i++) {
        int x;cin>>x;
        while(x>0) {
            x--;now++;vis[now]=i;
        }
    }
    int m;cin>>m;
    for(int i=1;i<=m;i++) {
        int x;cin>>x;cout<<vis[x]<<endl;
    }
    return 0;
}
