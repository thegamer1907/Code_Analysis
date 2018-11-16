#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<array>
#include<cmath>
#include<map>
#include<unordered_map>
#include<fstream>
#include<queue>
using namespace std;
typedef long long LL;
typedef double DB;
typedef pair<int,int> PI;
const int MIF=1e9+7;
inline LL in(){LL x=0;int n=1;char c=getchar();while(!isdigit(c)) n=(c=='-')?-1:1,c=getchar();while(isdigit(c)) x=x*10+c-'0',c=getchar();return x*n;}
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
#define For(a) for(int iI=1;iI<=a;iI++)
#define VEC(i,a) for(auto &i:a)
#define Vec(i,a,b) for(int i=a;i<b.size();i++)
#define reset(a,x) memset(a,x,sizeof(a))
#define eb emplace_back
#define x first
#define y second
#define on(x,i) (x|1LL<<(i-1))
#define off(x,i) (x&~1LL<<(i-1))
#define bit(x,i) (x>>(i-1)&1LL)
#define ooo cout<<__LINE__<<"\n";
#define rr(x) #x<<"="<<x
#define rt(a,i) #a<<"["<<i<<"]="<<a[i]
#define r2(a,i,j) #a<<"["<<i<<"]["<<j<<"]="<<a[i][j]
#define r3(a,i,j,k) #a<<"["<<i<<"]["<<j<<"]["<<k<<"]="<<a[i][j][k]
#define _ <<" "<<
#define frei(a) freopen(a".inp","r",stdin)
#define freo(a) freopen(a".out","w",stdout)
void fre(){ofstream fre("42.inp");{fre<<R"(
5
-1
1
2
1
-1
)";}fre.close();frei("42");}
/// pxh612
const int N=2005;
int n;
vector<int> g[N];
int gr[N];
void DFS(int x,int last)
{
    VEC(i,g[x]) if(i!=last)
    {
        DFS(i,x);
        gr[x]=max(gr[i],gr[x]);
    }
    gr[x]++;
}
main()
{
   // fre();
    n=in();
    FOR(i,1,n)
    {
        int x=in();x+=(x<0);
        g[x].eb(i);
    }
    DFS(0,-1);
    cout<<gr[0]-1;
}
