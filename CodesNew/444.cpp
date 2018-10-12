#pragma GCC optimize("O3")
#include<bits/stdc++.h>

#define debug(x)        {cerr<<#x<<" = "<<x<<endl;}
#define mod             1000000007
#define test()          long long  o;cin>>o;while(o--)
#define input(vec)      for(unsigned int c=0;c<vec.size();cin>>vec[c++])
#define output(vec,x)   for(unsigned int c=0;c<vec.size();x<<vec[c++]<<',');x<<endl;
#define sz(k)           k.size()
#define ln(s)           s.length()
#define pb              push_back
#define mp              make_pair
#define all(x)          x.begin(), x.end()
#define finc(i, x, y)   for (__typeof(x) i = x; i < y; i ++)
#define fdec(i, x, y)   for (__typeof(x) i = x; i > y; i --)
#define fincp(itr, x)   for (__typeof(x.begin()) itr = x.begin(); itr != x.end(); itr ++)
#define fdecp(itr, x)   for ( auto itr = x.end() - 1; itr != x.begin() - 1; itr --)
#define dragonforce()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cerr.tie(NULL);int tab;auto geti=[&](){cin>>tab;return tab;};
#define PI              (acos(-1.0))
#define E               2.71828182845904523536
#define by(x)           [](const auto& a, const auto& b) { return a.x < b.x; }
#define F               first
#define S               second
#define mem(a,x)        memset(a,x,sizeof(a))
#define mnv(v)          *min_element(v.begin(),v.end())
#define mxv(v)          *max_element(v.begin(),v.end())
#define valid(tx,n)     (tx>=0&&tx<n)
// #define pr(x)           cout<<fixed<<setprecision(x);


using namespace std;
typedef pair<int, int>  pi;
typedef vector<int>     vi;
typedef long long       ll;
typedef unsigned long long  ull;
typedef vector<string>  vs;

struct bucket
{
    //data members
    int id,score;
    bucket()
    {
        score=0;
    }
};

int myfun (int a,int b)
{
    //do somthing
}

int main()
{ 
    dragonforce();

    int n=geti(),k=geti();
    vi a(n),dp(n+1);
    input(a);
    dp[0]=0;
    dp[n-1]=a[n-1];
    fdec(c,n-2,-1)
        dp[c]=dp[c+1]+a[c];

    int b=0,mx=INT_MIN;
    finc(c,0,n){
        while(b<n+1 && dp[c]-dp[b]<=k)
            b++;
    //     if(b!=n)
    //     mx=max(mx,b-c-1);
    // else
        mx=max(mx,b-c-1);

        // debug(mx);
        // debug(b-c);
        // cerr<<endl;
    }

    cout << mx ;
    // output(dp,cerr);
}