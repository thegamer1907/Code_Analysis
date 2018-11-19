
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
const int N = 100005;

bool vis[1000];
int n, a[N][6], k, b[1000][6], b2[1000];
int main()
{
    scanf("%d%d", &n, &k);
    bool flag;
    int cnt=0;
    rep(i,1,n)
    {
        flag=true;
        int num=0;
        rep(j,1,k)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]==1)  { num += (1<<(j-1)); flag=false; }
        }
        if(flag) return 0*printf("YES\n");
        if(!vis[num])
        {
            ++cnt;
            b2[cnt]=num;
            rep(j,1,k) b[cnt][j]=a[i][j];
        }
        vis[num]=1;
    }
    flag=false;
    bool flag2;
    rep(i,1, cnt)
    {
        if(flag) break;
        rep(j,1,cnt) if(j!=i)
        {
            if(flag) break;
            flag2 = false;
            rep(l,1,k)
            {
                if(b[i][l]==1 && b[j][l]==1) {
                    flag2=true;
                    break;
                }
            }
            if(!flag2) { flag=true; break; }
        }
    }
    puts(flag ? "YES" : "NO");

    return 0;
}
