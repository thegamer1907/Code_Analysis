#include<bits/stdc++.h>
using namespace std;
#define frei(a)        freopen(a".inp","r",stdin)
#define freo(a)        freopen(a".out","w",stdout)
#define IOS ios_base::sync_with_stdio(false),cin.tie(NULL)
void fre(){ofstream fre("42.inp");{fre<<R"(
1000000000000000000
)";}fre.close();frei("42");}
inline long long in()  {long long x=0;int n=1;char c=getchar();while(!isdigit(c)){n=(c=='-')?-1:1;c=getchar();}while(isdigit(c)){x=x*10+c-'0';c=getchar();}return x*n;}
inline char inchar()   {char c=getchar();while(c==' '&&c=='\n') c=getchar();return c;}
#define FOR(i,a,b)     for(int i=a;i<=b;i++)
#define ROF(i,a,b)     for(int i=b;i>=a;i--)
#define VEC(i,a)       for(auto&i:a)
#define reset(a,x)     memset(a,x,sizeof(a))
#define eb             emplace_back
#define int long long
main()
{//fre();
    int n,res=0;
    cin>>n;
    while(n>0)
    {
        if(n%10==4||n%10==7) res++;
        n/=10;
    }
    if(res==0) return cout<<"NO",0;
    while(res>0)
    {
        if(res%10!=4&&res%10!=7) return cout<<"NO",0;
        res/=10;
    }
    cout<<"YES";
}
