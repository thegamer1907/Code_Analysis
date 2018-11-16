#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<fstream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<array>
#include<cmath>
#include<queue>
#include<map>
using namespace std;
typedef long long LL;
typedef pair<int,int> PI;
typedef pair<int,PI> PIP;
typedef double DB;
const int MIF=1e9+7;
inline LL in(){LL x=0;int n=1;char c=getchar();while(!isdigit(c)){n=(c=='-')?-1:1;c=getchar();}while(isdigit(c)){x=x*10+c-'0';c=getchar();}return x*n;}
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=b;i>=a;i--)
#define For(x) for(int i_=1;i_<=x;i_++)
#define VEC(i,a) for(auto&i:a)
#define Vec(i,a,b) for(int i=a;i<b.size();i++)
///bit
#define bit(x,i) ((x>>(i-1))&1LL)
#define on(x,i) (x|(1LL<<(i-1)))
#define off(x,i) (x&~(1LL<<(i-1)))
#define pow2(x) (1LL<<x)
#define bitnum(x) __builtin_popcountll(x)
#define bitsif(x) __builtin_ffsll(x)
///debug
#define ooo cout<<__LINE__<<"\n";
#define rr(x) #x<<"="<<x
#define rt(a,i) #a<<"["<<i<<"]="<<a[i]
#define r2(a,i,j) #a<<"["<<i<<"]["<<j<<"]="<<a[i][j]
#define r3(a,i,j,k) #a<<"["<<i<<"]["<<j<<"]["<<k<<"]="<<a[i][j][k]
#define _ <<" "<<
///short
#define reset(a,x) memset(a,x,sizeof(a))
#define endl "\n"
#define x first
#define y second
#define eb emplace_back
#define frei(a) freopen(a".inp","r",stdin)
#define freo(a) freopen(a".out","w",stdout)
void fre(){ofstream fre("42.inp");{fre<<R"(

)";}fre.close();frei("42");}
LL money=0;
int k,w,n;
main()
{
    k=in(),w=in(),n=in();
    FOR(i,1,n) money+=i*k;
    cout<<max(money-w,0ll);
}
