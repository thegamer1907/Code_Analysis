#include <bits/stdc++.h>
using namespace std;
int m,n;
int fa[50010],r[50010];
int cnt ;
void Init() {
    for(int i=1; i<=n; i++)
        fa[i] = i;
}
int Find(int x) {
    if(fa[x]!=x) {
        int t = fa[x];
        fa[x] = Find(fa[x]);
        r[x] = (r[x]+r[t])%2;
    }
    return fa[x];
}
void hebing(int x,int y) {

    int xx=Find(x);
    int yy=Find(y);
    if(xx!=yy) {
        fa[yy] = xx;
    }
}

int main() {
    int t;
    int x,y;
    int cnt1 = 1;
    scanf("%d",&n);
    int ans = 0;
    int flag = 0;
    memset(r,0,sizeof(r));
    Init();
    for(int i=1; i<=n ; i++) {
        scanf("%d",&y);
        hebing(i,y);
    }
    for(int i = 1; i <= n; i++) {
        if(fa[i] == i) ans++;
    }
    cout << ans << endl;

}

