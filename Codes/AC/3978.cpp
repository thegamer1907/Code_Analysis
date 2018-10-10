
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<stack>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;

#define bug printf("*********\n");
#define debug(x) cout<<"["<<x<<"]" <<endl;
#define mid (l+r)/2
#define chl 2*k+1
#define chr 2*k+2
#define lson l,mid,chl
#define rson mid,r,chr
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a));

const long long mod=1e9+7;
const int maxn=5e5+5;
const int INF=0x7fffffff;
const int inf=0x3f3f3f3f;
const double eps=1e-8;

int n,m;
vector<int> G[maxn];
int up[maxn];
int main() {
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++) {
        G[i].push_back(0);
        for(int j=1; j<=m; j++) {
            int x;
            scanf("%d",&x);
            G[i].push_back(x);
        }
    }
    for(int j=1; j<=m; j++) {
        int pos=1;
        for(int i=1; i<=n-1; i++) {
            if(G[i+1][j]>=G[i][j]) {
                if(i+1==n) {
                    while(pos<=i+1) {
                        up[pos++]=n;
                    }
                }
                continue;
            } else {
                while(pos<=i) {
                    up[pos]=max(up[pos],i);
                    pos++;
                }
            }
        }
    }
    up[n]=n;
    int q;
    cin>>q;
    while(q--) {
        int a,b;
        scanf("%d%d",&a,&b);
        if(up[a]>=b) {
            puts("Yes");
        } else {
            puts("No");
        }
    }
    return 0;
}
