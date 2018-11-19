#include <iostream>
#include <queue>
#include <stack>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <string>
#include <sstream>
#include <time.h>
#define x first
#define y second
#define pb push_back
#define mp make_pair
#define lson l,m,rt*2
#define rson m+1,r,rt*2+1
#define mt(A,B) memset(A,B,sizeof(A))
#define lowbit(x) (x&(-x))
using namespace std;
typedef long long LL;
//const double PI = acos(-1);
const int N=1e5+10;
//const int M=1e6+10;
const LL mod=1e9+7;
const int inf = 0x3f3f3f3f;
const LL INF=0x3f3f3f3f3f3f3f3fLL;
const double eps=1e-9;
const int MAXM=500010;
inline char nc()
{
    static char buf[100000], *p1 = buf, *p2 = buf;
    return p1 == p2 && (p2 = (p1 = buf) + fread(buf, 1, 100000, stdin), p1 == p2) ? EOF : *p1++;
}
template <class T>inline void read(T &x)
{
    char c = nc(), b = 1;
    for (; !(c >= '0' && c <= '9'); c = nc()) if (c == '-') b = -1;
    for (x = 0; c >= '0' && c <= '9'; x = x * 10 + c - '0', c = nc());
    x *= b;
}
int vis[N][5],vik[5],vip[100];
void solve()
{
     int n,k,fla=0;
     cin>>n>>k;
     mt(vik,0);
     mt(vip,0);
     for(int i=1;i<=n;i++)
     {
         int sum=0,bei,w=0;
         bei=(1<<(k-1));
         for(int j=1;j<=k;j++)
         {
             cin>>vis[i][j];
             if(vis[i][j])sum+=bei;
             if(!vis[i][j])vik[j]++;
             bei/=2;
             w+=vis[i][j];
         }
         if(w==0)fla=1;
         vip[sum]++;
     }
     if(k==1)
     {
         if(vik[1]||fla)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
     else if(k==2)
     {
         if((vik[1]&&vik[2])||fla==1)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
     else if(k==3)
     {
         int flg=0;
         for(int i=1;i<=n;i++)
         {
             int sum=0;
             if(!vis[i][1]&&!vis[i][2]&&vik[3])
             {
                 flg=1;
             }
             else if(!vis[i][1]&&!vis[i][3]&&vik[2])
             {
                 flg=1;
             }
             else if(!vis[i][2]&&!vis[i][3]&&vik[1])
             {
                 flg=1;
             }
         }
         if(flg||fla)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
     else if(k==4)
     {
         int flg=0;
         if(vip[8]&&vik[1]||vip[4]&&vik[2]||vip[2]&&vik[3]||vip[1]&&vik[4])flg=1;
         for(int i=0;i<(1<<k);i++)
         {
             int cnt=0;
             for(int j=0;j<k;j++)
             {
                 if(i&(1<<j))cnt++;
             }
             if(cnt==2)
             {
                 cnt=15^i;
                 //cout<<i<<" "<<cnt<<endl;
                 if(vip[i]&&vip[cnt])flg=1;
             }
         }
         if(flg||fla)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
}
int main()
{
#ifdef Local
    freopen("data.h","r",stdin);
    //freopen("out1.txt","w",stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
#ifdef Local
    cerr << "time: " << (LL) clock() * 1000 / CLOCKS_PER_SEC << " ms" << endl;
#endif
    return 0;
}
