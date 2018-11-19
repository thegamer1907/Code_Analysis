
#include<bits/stdc++.h>
using namespace std;
#pragma comment(linker, "/STACK:102400000,102400000")
#define rep(i,a,b) for (int i=a; i<=b; ++i)
#define per(i,b,a) for (int i=b; i>=a; --i)
#define mes(a,b)  memset(a,b,sizeof(a))
#define INF 0x3f3f3f3f
#define MP make_pair
#define PB push_back
#define fi  first
#define se  second
typedef long long ll;
const int N = 200005;

int a, b, c, t1, t2;
bool vis[100];
int main()
{
    scanf("%d%d%d%d%d", &a, &b, &c, &t1, &t2);
    int a1 = a*2;
    if(b || c) ++a1;
    a1 %= 24;
    int b1 = b/5*2;
    if(b%5!=0) ++b1;
    if(b%5==0 && c) ++b1;
    int c1 = c/5*2;
    if(c%5!=0) ++c1;
    vis[a1] = vis[b1] = vis[c1] = true;
    //cout<<a1<<"  "<<b1<<"  "<<c1<<"-----\n";
    bool flag1=true, flag2=true;
    if(t1>t2) swap(t1, t2);
    rep(i, t1*2, t2*2) if(vis[i]) flag1=false;
    rep(i, t2*2, t1*2+24) if(vis[i%24]) flag2=false;
    if(flag1 || flag2) puts("YES");
    else puts("NO");

    return 0;
}
