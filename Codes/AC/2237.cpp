#include <bits/stdc++.h>
using namespace std;
#if DEBUG && !ONLINE_JUDGE
    #include "/home/chaman/Desktop/cpp/debug.h"
#else
    #define debug(args...)
    #define DBG(x...)
#endif
typedef     long long int                        ll;
typedef     long double                          ld;
typedef     vector<ll>                           vi;
typedef     pair<ll,ll>                          pii;
typedef     vector<pii>                          vpi;
typedef     vector<vi>                           vvi;
typedef     map<ll,ll>                           mii;
typedef     map<char,ll>                         mci;
typedef     priority_queue<ll>                   pqi;
typedef     priority_queue<pii>                  pqii;
typedef     priority_queue<ll,vi,greater<ll>>    pqmini;
typedef     priority_queue<pii,vpi,greater<pii>> pqminpi;

#define     fi              first
#define     se              second
#define     sz(a)           (ll)((a).size())
#define     rep(i,n)        for(ll i=0;i<n;i++)
#define     repA(i,a,n)     for(auto i=a;i<=n;i++)
#define     repD(i, a, n)   for(auto i = a; i >= (n); --i)
#define     trav(a, x)      for(auto& a : x)
#define     all(x)          x.begin(), x.end()
#define     fill(a)         memset(a, 0, sizeof (a))
#define     pb              push_back
#define     MOD             1000000007
#define     PI              3.14159265359
#define     EULER           2.7182818284

//////////////////////////////////////////////////////////////////////

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // ifstream in("input.txt");
    // streambuf *cinbuf = std::cin.rdbuf(); //save old buf
    // cin.rdbuf(in.rdbuf()); //redirect std::cin to in.txt!
    // ofstream out("output.txt");
    // streambuf *coutbuf = std::cout.rdbuf(); //save old buf
    // cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!
    cout.precision(20);
    ll n;
    cin>>n;
    vi v(n);
    rep(i,n)cin>>v[i];
    DBG(v);
    ll ans=0;
    ll p1=0,p2=n-1;
    ll s1=v[0],s2=v[n-1];
    while(p1<p2){
        if(s1==s2){
            ans=s1;
            s1+=v[p1+1];
            p1++;
        }
        if(s1<s2){s1+=v[p1+1];p1++;}
        else{s2+=v[p2-1];p2--;}
        DBG(p1);
        DBG(p2);
        DBG(s1);
        DBG(s2);
        DBG(ans);
        }
    cout<<ans;




    debug("\nRuntime = " + to_string((ld)clock()/(ld)CLOCKS_PER_SEC));
    return 0;
}