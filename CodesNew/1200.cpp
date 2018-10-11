/* Kamal sahoo
 * NIT Rourkela
 * ( - _ - ) */
#include<bits/stdc++.h>
using namespace std;
const long long int N =(long long)1e18+5;
const long long Mod = (long long)1e9+7;
#define     ii      long long
#define     uii     unsigned long long
int Int() {
    int x;
    scanf("%d",&x);
    return x;
}
ii Long() {
    ii x;
    scanf("%lld",&x);
    return x;
}
void Char(char* ch) {
    scanf("%s",ch);
}
template<typename t>inline t abs(t a) {
    if(a>=0)
        return a;
    return -a;
}
template<typename T> inline T modpow(T b, T p, T Mod) {
    T res  = 1;
    while(p) {
        if(p&1) {
            res *= b ;
            res %= Mod ;
        }
        b *= b;
        b %= Mod;
        p >>= 1;
    }
    return res ;
}

template<typename T> inline T ModInv(T b, T Mod) {
    return modpow(b, Mod - 2, Mod );
}

template<typename T> inline T pwr(T b, T p) {
    T res  = 1;
    while(p) {
        if(p&1) {
            res *= b ;
        }
        b *= b;
        p >>= 1;
    }
    return res ;
}

template<typename T> inline T gcd(T a, T b) {
    if(b==0)
        return a;
    return gcd(b, a%b);
}

template <typename T> inline void Int(T &n) {
    n = 0;
    int f = 1;
    register int ch = getchar();
    for (; !isdigit(ch); ch = getchar())
        if (ch == '-')
            f = -1;
    for (; isdigit(ch); ch = getchar())
        n = (n << 3) + (n << 1) + ch - '0';
    n = n * f;
}
template<typename T, typename U> inline void Int(T &a, U &b) {
    Int(a);
    Int(b);
}
template<typename T, typename U, typename W> inline void Int(T &a, U &b, W &c) {
    Int(a,b);
    Int(c);
}
template<typename T, typename U, typename W,typename X> inline void Int(T &a, U &b, W &c, X &d) {
    Int(a,b,c);
    Int(d);
}
template <typename T,typename U>inline void swap(T &a,U &b){T c;c=a;a=b;b=c;};
vector<int> Unique(vector<int> v) {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()),v.end());
    return v;
}
vector<string> split(const string &s,char c) {
    vector<string>v;
    stringstream ss(s);
    string x;
    while(getline(ss,x,c))
        v.emplace_back(x);
    return move(v);
}

///This DEBUGGER-tool need c++11///
#define TRACE

#ifdef TRACE
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

#else

#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)

#endif
///----------------------------///

#define     In         Int()
#define     Lin        Long()
#define     ld          double
#define     pii         pair<ii,ii>
#define     tii         pair<pii,ii>
#define     F          first
#define     S          second
#define     all(x)      x.begin(),x.end()
#define     mem(a)      memset(a,0,sizeof a)
#define     memn(a)     memset(a,-1,sizeof a)
#define pb(a)   push_back(a)
#define mp(a,b) make_pair(a,b)
#define ri(a,b) for(int i=a;i<=b;++i)
#define rj(a,b) for(int j=a;j<=b;++j)
#define rk(a,b) for(int k=a;k<=b;++k)
#define rl(a,b) for(int l=a;l<=b;++l)
#define vi vector<ii>
#define vii vector<pii>
#define viii vector<tii>
#define bg begin()
#define en end()
#define sz size()
main()
{
    ii n,i,j,a[100005],ans=-1,Min=N;
    cin>>n;
    ri(1,n)cin>>a[i];
    ri(1,n)
    {
        ii tmp=0;
        j=(a[i])%n+1;
        if(j<=i)
            tmp=a[i]+i-j;
        else
            tmp=a[i]+n-j+i;
        if(tmp<Min)
        {
            Min=tmp;
            ans=i;
        }
        else if(tmp==Min and i<ans)
        {
            ans=i;
        }

    }
    cout<<ans;

}