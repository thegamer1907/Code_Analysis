#include<bits/stdc++.h>
using namespace std;
#define frei(a)        freopen(a".inp","r",stdin)
#define freo(a)        freopen(a".out","w",stdout)
#define IOS ios_base::sync_with_stdio(false),cin.tie(NULL)
void fre(){ofstream fre("42.inp");{fre<<R"(

)";}fre.close();frei("42");}
inline long long in()  {long long x=0;int n=1;char c=getchar();while(!isdigit(c)){n=(c=='-')?-1:1;c=getchar();}while(isdigit(c)){x=x*10+c-'0';c=getchar();}return x*n;}
inline char inchar()   {char c=getchar();while(c==' '&&c=='\n') c=getchar();return c;}
#define FOR(i,a,b)     for(int i=a;i<=b;i++)
#define ROF(i,a,b)     for(int i=b;i>=a;i--)
#define VEC(i,a)       for(auto&i:a)
#define reset(a,x)     memset(a,x,sizeof(a))
#define eb             emplace_back
main()
{
    int res=0,n;
    n=in();
    FOR(__,1,n)
    {
        int x=in(),y=in();
        if(y-x>=2) res++;
    }
    cout<<res;
}
