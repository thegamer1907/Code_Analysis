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
const int maxn=2000;
char s[10];int n;bool tmp,f2,f1;
int main(){
    sa(s);sa(n);
        char c1=s[0],c2=s[1];
        while(n--){
            sa(s);
            if(s[0]==c1&&s[1]==c2)tmp=true;
            if(s[1]==c1)f2=true;
            if(s[0]==c2)f1=true;
        }
        if(f1&&f2) puts("YES");
        else if(tmp)puts("YES");
        else puts("NO");
}
