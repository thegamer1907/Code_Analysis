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
const int N=1e2+10;
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
vector<LL> G,P;
vector<int> a,b;
void solve()
{
     int flg=0;
     LL h,m,s,t1,t2,k;
     cin>>h>>m>>s>>t1>>t2;
     G.pb((t1%12)*30*600);
     G.pb((t2%12)*30*600);
     k=(s%60)*6*600;
     G.pb(k);
     k=(m%60)*36*100+60*s;
     G.pb(k);
     k=(h%12)*600*30+m*60+s;
     G.pb(k);
     sort(G.begin(),G.end());
     //cout<<(t1%12)*30*600<<" "<<(t2%12)*30*600<<endl;
////     for(int i=0;i<G.size();i++)
////     {
////         cout<<G[i]<<" ";
////     }
////     cout<<endl;
     for(int i=0;i<2;i++)
     {
         for(int j=0;j<G.size();j++)P.pb(G[j]);
     }
     for(int i=0;i<P.size();i++)
     {
         if(P[i]==((t1%12)*30*600))a.pb(i);
         if(P[i]==((t2%12)*30*600))b.pb(i);
     }
     for(int i=0;i<a.size();i++)
     {
         for(int j=0;j<b.size();j++)
         {
             if(abs(a[i]-b[j])<=1)flg=1;
         }
     }
     if(flg)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
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
