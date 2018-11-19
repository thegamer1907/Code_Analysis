#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define fr first
#define se second
#define pb push_back
#define inf 1e9
#define INF 1e18
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
template<class T>inline void chkmin(T&x,T y){if(y<x)x=y;}
template<class T>inline void chkmax(T&x,T y){if(x<y)x=y;}
#define N 100005

bool vis[16];

int main() {
    int n, k, i, j, l, b, a;
    scanf("%d%d", &n, &k);
    for(i = 1; i <= n; i ++) {
        b = 0;
        for(j = 1; j <= k; j ++) {
            scanf("%d", &a);
            b = 2 * b + a;
        }
        vis[b] = 1;
    }
    for(i = 0; i < 16; i ++) for(j = 0; j < 16; j ++) {
        if(vis[i] && vis[j]) {
            for(l = 0; l < 4; l ++) if((i & j) / (1 << l) & 1) break;
            if(l == 4) {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
