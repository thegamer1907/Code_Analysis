#include <bits/stdc++.h>
using namespace std;


#define inf (1<<30)-1
#define INF (1LL<<62)-1
#define MOD 1000000007LL
#define MP make_pair
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define PI acos(-1)
#define MEM(x,y) memset(x,y,sizeof (x))
#define debug cout<<"A"<<'\n'
#define REP(i,a,b) for (int i=(a); i<=(b); i++)
#define PER(i,a,b) for (int i=(a); i>=(b); i--)
#define REPL(i,a,b) for (LL i=(a); i<=(b); i++)
#define PERL(i,a,b) for (LL i=(a); i>=(b); i--)
#define print(x) cout<<x<<'\n'
#define itrALL(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define UNIQUE(X) X.erase( unique( X.begin(), X.end() ), X.end() )


typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int>PII;
typedef pair<LL,LL>PLL;
typedef vector<int> VI;
typedef vector<LL> VL;


template <class T> inline T bigmod(T p,T e,T M)
{
    T ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}

template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
template <class T, class X> inline bool getbit(T a, X i) { T t=1; return ((a&(t<<i))>0);}
template <class T, class X> inline T setbit(T a, X i) { T t=1;return (a|(t<<i)); }
template <class T, class X> inline T resetbit(T a, X i) { T t=1;return (a&(~(t<<i)));}

/*end of header*/


int main()
{
    //freopen("input_file_name.in","r",stdin);
    //freopen("output_file_name.out","w",stdout);
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    m/=5;
    if(m==0)m=12;
    s/=5;
    if(s==0)s=12;
    int aage=0,pore=0;
    if(t1>t2)swap(t1,t2);
    if(t1<=h && t2>h)pore=1;
    else aage=1;
    if(t1<=m && t2>m)pore=1;
    else aage=1;
    if(t1<=s && t2>s)pore=1;
    else aage=1;
    //cout<<aage<< " "<<pore<<"\n";
    if(aage==0 || pore==0)print("YES");
    else print("NO");
    return 0;
}

