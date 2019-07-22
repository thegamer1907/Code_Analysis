///░░░░░░░░░░▄
///░░░░░░░░▄▐░▄▄█████▄▄
///░░░░░░▄█████████████▄▀▄▄░▄▄▄
///░░░░░█████████████████▄██████
///░░░░████▐█████▌████████▌█████▌
///░░░████▌█████▌█░████████▐▀██▀
///░▄█████░█████▌░█░▀██████▌█▄▄▀▄
///░▌███▌█░▐███▌▌░░▄▄░▌█▌███▐███░▀
///▐░▐██░░▄▄▐▀█░░░▐▄█▀▌█▐███▐█
///░░███░▌▄█▌░░▀░░▀██░░▀██████▌
///░░░▀█▌▀██▀░▄░░░░░░░░░███▐███
///░░░░██▌░░░░░░░░░░░░░▐███████▌
///░░░░███░░░░░▀█▀░░░░░▐██▐███▀▌
///░░░░▌█▌█▄░░░░░░░░░▄▄████▀░▀
///░░░░░░█▀██▄▄▄░▄▄▀▀▒█▀█░▀
///░░░░░░░░░▀░▀█▀▌▒▒▒░▐▄▄
///░░░░░░░░▄▄▀▀▄░░░░░░▄▀░▀▀▄▄
///░░░░░░▄▀░▄▀▄░▌░░░▄▀░░░░░░▄▀▀▄
///░░░░░▐▒▄▀▄▀░▌▀▄▄▀░░░░░░▄▀▒▒▒▐
///░░░░▐▒▒▌▀▄░░░░░▌░░░░▄▄▀▒▐▒▒▒▒▌
///░░░▐▒▒▐░▌░▀▄░░▄▀▀▄▀▀▒▌▒▐▒▒▒▒▐▐
///░░░▌▄▀░░░▄▀░█▀▒▒▒▒▀▄▒▌▐▒▒▒▒▒▌▌
///░░▄▀▒▐░▄▀░░░▌▒▐▒▐▒▒▒▌▀▒▒▒▒▒▐▒▌

/*
    " DO NOT COPY "
    " DO NOT COPY "
    " DO NOT COPY "
*/

#include <bits/stdc++.h>
#define D double
#define ll long long
#define ld long double
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vll2 vector<vll>
#define vD vector<D>
#define vld vector<ld>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define P pair<int,int>
#define PLL pair<ll,ll>
#define VP vector<pair<int,int> >
#define VPLL vector<pair<ll,ll> >
#define FOR(i,a,b) for(i=a;i<b;i++)
#define FORI(i,a,b) for(ll i=a;i<b;i++)
#define nFOR(i,a,b) for(i=a;i>=b;i--)
#define nFORI(i,a,b) for(ll i=a;i>=b;i--)
#define times(x) for(ll cas=0,tms=x;cas<tms;cas++)
#define deb(...) db(#__VA_ARGS__,__VA_ARGS__);
#define SYNC ios_base::sync_with_stdio(0);CC;
#define CC cin.tie(NULL);cout.tie(NULL);
#define pout(x,d) cout<<fixed<<setprecision(d)<<x
#define minQ(x) priority_queue<x,vector<x>,greater<x> >
#define maxQ(x) priority_queue<x,vector<x>,less<x> >
#define findd(stl,x) (stl.find(x)!=stl.end())
#define MEM(a,x) memset(a,x,sizeof(a))
#define all(x) x.begin(),x.end()
#define rand(v) random_shuffle(all(v))
#define lb(a,x) lower_bound(all(a),x)-a.begin()
#define ub(a,x) upper_bound(all(a),x)-a.begin()
#define uniq(v) v.erase(unique(all(v)),v.end());
#define lower(x) transform(all(x),x.begin(),::tolower);
#define upper(x) transform(all(x),x.begin(),::toupper);
#define _1s(a) __builtin_popcountll(a)
#define lowbit(x) (log2((D)x))
#define rdd rd()
#define sgn(x) (x>0?1:x<0?-1:0)
#define cont(x) if(x) continue
#define break(x) if(x) break
#define sim template<class T
#define pb push_back
#define sz(x) ((ll)x.size())
#define sq(x) ((ll)sqrt(x))
#define ff first
#define ss second
#define endl '\n'
#define nl cout<<'\n'
#define re return
#define Bye return 0;
using namespace std;

/// Global Constant

const double pi = 3.141592653589;
const long long oo = 1ll<<60;
const int dx[] = {1,-1,0,0,0};
const int dy[] = {0,0,1,-1,0};
const double eps = 1e-9;
long long MODI = 1e9+7;

/// Global Functions

ll rd(){ll x;cin>>x;re x;}
sim > void out(T xx){cout<<xx;exit(0);}
sim ,class Ta> void out(T xx,Ta yy){cout<<xx<<' '<<yy;exit(0);}
sim > void add(T& aa,T bb){aa=(aa+bb)%MODI;}
sim > void mul(T& aa,T bb){aa=(aa*bb)%MODI;}

sim > T sort(T &x){sort(all(x));re x;}
sim > T rsort(T &x){sort(all(x),__greater());re x;}
sim > T rev(T &x){reverse(all(x));re x;}

sim > T nc2(T x){re(x*(x-1))/2;}
sim > T sum(T x){re(x*(x+1))/2;}

sim > T lcm(T x,T y){re x/__gcd(x,y)*y;}
sim > T ceil(T x,T y){re x>=0?(x+y-1)/y:-(-x/y);}
sim > T floor(T x,T y){re x>=0?(x/y):-(-x+y-1)/y;}
sim > bool in(T x,T l,T r){re((l<=x&&x<=r)||(r<=x&&x<=l));}
sim > bool sin(T x,T l,T r){re((l<x&&x<r)||(r<x&&x<l));}
bool vowel(char c){c=tolower(c);re(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');}

string c2s(char ch){re string(1,ch);}
string ll2s(ll tol){stringstream ss;ss<<tol;re ss.str();}
ll s2ll(string strng){ll tol;stringstream ss(strng);ss>>tol;re tol;}
ll revll(ll x){string s=ll2s(x);reverse(all(s));re s2ll(s);}
ll szll(ll wh){ll wo=0;while(wh)wo++,wh/=10;re wo;}

sim > ld dis(T x1,T y1,T x2,T y2){re sqrt((ld)(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));}
bool pal(string pa){ll sp=0,sz=sz(pa);for(;sp<sz/2;sp++)if(pa[sp]!=pa[sz-sp-1])re 0;re 1;}
bool pal(string pa,ll sp,ll ep){for(;sp<ep;sp++,ep--)if(pa[sp]!=pa[ep])re 0;re 1;}
string binary(ll x){string bn;for(;x;x/=2)bn.pb(x%2?'1':'0');rev(bn);re bn;}
ll decimal(string s){ll dm=0,ct=1;nFORI(i,sz(s)-1,0){dm+=ct*(s[i]=='1');ct*=2;}re dm;}

ll power(ll X,ll Y){ll A=1;for(;Y;Y>>=1,X=(X*X))if(Y&1)A=(A*X);re A;}
ll powerm(ll X,ll Y,ll M=MODI){ll A=1;for(;Y;Y>>=1,X=(X*X)%M)if(Y&1)A=(A*X)%M;re A;}
sim > T inv(T x,T mod=MODI){re powerm(x,mod-2,mod);}

sim > istream& operator>>(istream& in,ve<T>&v){for(T &e:v)in>>e;re in;}
sim > istream& operator>>(istream& in,ve<ve<T> >&v){for(ve<T>&e:v)for(T &ee:e)in>>ee;re in;}
sim , class Ta> istream& operator>>(istream& in,pair<T,Ta>&v){in>>v.ff>>v.ss;re in;}

sim > ostream& operator<<(ostream& ot,const ve<T>&v){for(T e:v)ot<<e<<' ';re ot;}
sim > ostream& operator<<(ostream& ot,const ve<ve<T> >&v){for(ve<T>e:v)ot<<e<<(e==v[v.size()-1]?' ':'\n');re ot;}
sim , class Ta> ostream& operator<<(ostream& ot,const pair<T,Ta>&v){ot<<v.ff<<' '<<v.ss<<endl;re ot;}
sim , class Ta>ostream& operator<<(ostream& ot,const ve<pair<T,Ta> >&v){for(auto &e:v)ot<<e.ff<<' '<<e.ss<<'\n';re ot;}
sim > ostream& operator<<(ostream& ot,const set<T>&v){for(T &x:v)ot<<x<<' ';re ot;}
sim , class Ta> ostream& operator<<(ostream& ot,const map<T,Ta>&v){for(auto &x:v)ot<<x.ff<<' '<<x.ss<<endl;re ot;}

sim > void db(const char *rg,T h){cout<<rg<<" = "<<h<<endl;}
sim , class... TT> void db(const char *rg,T h,TT... a){while(*rg!=',')cout<<*rg++;cout<<" = "<<h<<'\n';db(rg+1,a...);}

sim > void fwrite(ostream& os,const T& x){os<<x<<' ';}
sim, class... TT> void fwrite(ostream& os,const T& x,TT... tt){fwrite(os, x);fwrite(os, tt...);}
template<class... TT> void outt(TT... tt){fwrite(cout,tt...);exit(0);}
template<class... TT> void write(TT... tt){fwrite(cout,tt...);cout<<endl;}

bool nasit(ll){};
ll bmax(ll l,ll h){ll ans=-1,m;while(l<=h){m=(l+h)/2;(nasit(m)?l=m+1,ans=m:h=m-1);}return ans;}
ll bmin(ll l,ll h){ll ans=-1,m;while(l<=h){m=(l+h)/2;(nasit(m)?h=m-1,ans=m:l=m+1);}return ans;}



/// main
int main(){
    //freopen("input.txt","r",stdin);
    SYNC
    ll n,m,k;
    cin>>n>>m>>k;
    vll p(m); cin>>p;
    int rem=0;
    ll i=0;
    ll ans=0;
    while(i<m){
        ll cnt=0;
        while(p[i]-rem<=k and i<m) i++,cnt++;
        if(cnt>0){
            ans++;
            rem+=cnt;
            cnt=0;
        }else{
            rem+=k;
        }
    }
    cout<<ans;
    Bye
}