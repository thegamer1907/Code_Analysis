#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<map>
using namespace std;
typedef long long LL;
#define M(a,b) memset(a,b,sizeof(a))
#define pb push_back
const int maxn = 100000+10;
const LL mod = 1000000007;
int vis[1<<5]={0};
int main() {

    int n,m,x;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;++i) {
        int st=0;
        for (int j=0;j<m;++j) {
            scanf("%d",&x);
            st+=x<<j;
        }
//        printf("--->  %d  <---\n",st);
        vis[st]=1;
    }
    int flag=0;
    m=1<<m;
//    printf("*** %d\n",m);
    for (int i=0;i<m&&!flag;++i) {
        for (int j=0;j<m&&!flag;++j) {
            if (!vis[i]||!vis[j]) {
                continue;
            }
//            printf("0.0 (%d,%d)\n",vis[i],vis[j]);
//            printf("----%d %d\n",i,j);
            if (i&j) {
                continue;
            }
            flag=1;
        }
    }
    puts(flag?"YES":"NO");
    return 0;
}
/**
5 3
1 0 1
1 1 0
1 0 0
1 0 0
1 0 0
**/
