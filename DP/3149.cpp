#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
#define dbg(x) cout << #x << '=' << x << '\n';
#define ll long long
#define pi pair<int,int>
#define pl pair<long long,long long>
#define rd(x) cin >> x;
#define rda(a,n) for(int i=1;i<=n;i++) cin >> a[i];
#define wr(x) cout << x << ' ';
#define wrl(x) cout << x << '\n';
#define wra(a,n) for(int i=1;i<=n;i++) cout << a[i] << ' '; cout << '\n';
#define lg length()
#define pb push_back
ifstream in("file.in");
ofstream out("file.out");
#define MAXN 100005
#define INF 1000000005
#define LINF 1000000000000000005

int n,m,d1[505][505],d2[505][505],q,x1,y1,x2,y2,ans;
char a[505][505];

int32_t main(){
    ios_base :: sync_with_stdio(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            d1[i][j]=d1[i][j-1];
            if(a[i][j]=='.' && a[i][j-1]=='.') d1[i][j]++;
            d2[i][j]=d2[i-1][j];
            if(a[i][j]=='.' && a[i-1][j]=='.') d2[i][j]++;
        }
    }
    cin >> q;
    for(int i=1;i<=q;i++){
        cin >> x1 >> y1 >> x2 >> y2; ans=0;
        for(int i=x1;i<=x2;i++){
            ans+=d1[i][y2]-d1[i][y1-1];
            if(a[i][y1]=='.' && a[i][y1-1]=='.') ans--;
        }
        for(int i=y1;i<=y2;i++){
            ans+=d2[x2][i]-d2[x1-1][i];
            if(a[x1][i]=='.' && a[x1-1][i]=='.') ans--;
        }
        cout << ans << '\n';
    }
}
