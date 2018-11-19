#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
typedef pair<int,int> PII;
typedef vector<int> VI;
inline int sa(LL &x){return scanf("%lld",&x);}
inline void pu(LL x){printf("%lld",x);}
//typedef __int64 LL;
//inline int sa(LL &x){return scanf("%I64d",&x);}
//inline void pu(LL x){printf("%I64d",x);}
inline int sa(int &x){return scanf("%d",&x);}
inline int sa(char*s){return scanf("%s",s);}
inline int sa(double &x){return scanf("%lf",&x);}
inline void pu(char*s){printf("%s",s);}
inline void pu(const char*s){printf("%s",s);}
inline void pu(int x){printf("%d",x);}
inline void pu(double x){printf("%g",x);}
template<class T>inline void pt(T x){putchar(' ');pu(x);}
template<class T>inline void puln(T x){pu(x);putchar('\n');}
template<class T,class V>inline int sa(T &x,V &y){sa(x);sa(y);}
#define iof ios::sync_with_stdio(false)
#define fi fflush(stdin)
#define fo fflush(stdout)
#define re(i,n) for(int i=1;i<=(n);i++)
#define re0(i,n) for(int i=0;i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define rep0(i,a,b) for(int i=(a);i<(b);i++)
#define mem(a) memset(a,0,sizeof(a))
#define lowbit(i) (i&(-i))
#define fil(a,n) fill(a,a+n,0)
#define psh(x) push_back(x)
#define PI acos(-1.0)
const int inf=0x3f3f3f3f;
const int INF=0x7fffffff;
const int maxn=1e5+10;
map<string,LL> mp;
LL p[maxn][10],x[maxn],d[10];
LL n,k,v,e0,e1;
int main(){
    sa(n,k);
    re(i,n){
        re(j,k){
            sa(p[i][j]);
            x[i]+=p[i][j];
            d[j]+=p[i][j];
            v=max(v,d[j]);
        }
        e0+=(x[i]==0);
        e1+=(x[i]==1);
    }
    if(v==n){
        puts("NO");
        return 0;
    }
    if(e1>0||e0>0){
        puts("YES");
        return 0;
    }
    if(k<4){
        puts("NO");
        return 0;
    }
    re(i,n){
        string s="";
        re(j,k)s+=char('0'+p[i][j]);
        mp[s]++;
    }
    if((mp["1100"]>0&&mp["0011"]>0)||(mp["1010"]>0&&mp["0101"]>0)||(mp["1001"]>0&&mp["0110"]>0)){
        puts("YES");
        return 0;
    }else{
        puts("NO");
        return 0;
    }
}
