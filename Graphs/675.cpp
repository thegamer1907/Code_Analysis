#include<bits/stdc++.h>
using namespace std;
#define frei(a)        freopen(a".inp","r",stdin)
#define freo(a)        freopen(a".out","w",stdout)
#define IOS ios_base::sync_with_stdio(false),cin.tie(NULL)
void fre(){ofstream fre("42.inp");{fre<<R"(
5 1
BGGBG
)";}fre.close();frei("42");}
inline long long in()  {long long x=0;int n=1;char c=getchar();while(!isdigit(c)){n=(c=='-')?-1:1;c=getchar();}while(isdigit(c)){x=x*10+c-'0';c=getchar();}return x*n;}
inline char inchar()   {char c=getchar();while(c==' '&&c=='\n') c=getchar();return c;}
#define FOR(i,a,b)     for(int i=a;i<=b;i++)
#define ROF(i,a,b)     for(int i=b;i>=a;i--)
#define VEC(i,a)       for(auto&i:a)
#define reset(a,x)     memset(a,x,sizeof(a))
#define eb             emplace_back
///
int n,t;
char c[100];
main()
{//fre();
    n=in(),t=in();
    FOR(i,1,n) c[i]=inchar();
    FOR(__,1,t)
    {
        FOR(i,1,n-1) if(c[i]=='B'&&c[i+1]=='G')
        {
            swap(c[i],c[i+1]);
            i++;
        }
    }
    FOR(i,1,n) cout<<c[i];
}
