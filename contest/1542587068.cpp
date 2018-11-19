#include <bits/stdc++.h>

#define LOCAL 0

#define lli long long int
#define llu unsigned long long int
#define ld long double
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define si(n) scanf("%d",&n)
#define slli(n) scanf("%lld",&n);
#define ss(n) scanf("%s",n);

const long double EPS = 1e-10;
const int MOD = 1000000007ll;
const int mod1 = 1000000009ll;
const int mod2 = 1100000009ll;
int INF = (int)1e9;
lli INFINF = (lli)1e18;
long double PI = acos(-1.0);

using namespace std;

int bit_count(lli _x){lli _ret=0;while(_x){if(_x%2==1)_ret++;_x/=2;}return _ret;}
int bit(lli _mask,int _i){return (_mask&(1ll<<_i))==0?0:1;}
int add(int a,int b,int m=MOD){int x=a+b;while(x>=m)x-=m;while(x<0)x+=m;return x;}
int sub(int a,int b,int m=MOD){int x=a-b;while(x<0)x+=m;while(x>=m)x-=m;return x;}
int mul(int a,int b,int m=MOD){lli x=a*1ll*b;x%=m;while(x<0)x+=m;return (int)x;}
int ldtoint(ld x){return (int)(x+0.5);}lli ldtolli(ld x){return (lli)(x+0.5);}
int powermod(lli _a,lli _b,int _m=MOD){lli _r=1;while(_b){if(_b%2==1)_r=mul(_r,_a,_m);_b>>=1;_a=mul(_a,_a,_m);}return _r;}

template<class T1,class T2>ostream&operator<<(ostream& os,const pair<T1,T2>&p){os<<"["<<p.first<<","<<p.second<<"]";return os;}
template<class T>ostream&operator<<(ostream& os,const vector<T>&v){os << "[";bool first=true;for (T it:v){if (!first)os<<", ";first = false;os<<it;}os<<"]";return os;}
template<class T>ostream&operator<<(ostream& os,set<T>&v){os<<"[";bool first=true;for (T it:v){if(!first)os<<", ";first=false;os<<it;}os<<"]";return os;}
template<class T1,class T2>ostream&operator<<(ostream& os,map<T1,T2>&v){os<<"[";bool first=true;for(pair<T1,T2> it:v){if(!first)os<<", ";first=false;os<<"("<<it.F<<","<<it.S<<")";}os<<"]";return os;}
template<class T>void debug(T a[],int s,int e){if(!LOCAL)return;cout<<"[";for(int i=s;i<e;i++)cout<<a[i]<<", ";cout<<a[e]<<"]\n";}
template<class T>void debug(T x){if(!LOCAL)return;cout<<x<<"\n";}

lli h,m,s,t1,t2;

int main()
{
if(LOCAL){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
}
    srand (time(NULL));
    //ios::sync_with_stdio(0);cin.tie(0);

    cin>>h>>m>>s>>t1>>t2;
    double sss,mmm,hhh;
    sss = s*6;
    mmm = m*6 + (ld)s*(1.0/10);
    if(h == 12) hhh = 0;
    else hhh = h*30;
    hhh += (ld)m*(1.0/2) + (ld)s*(1.0/120);

    //cout<<hhh<<" "<<mmm<<" "<<sss<<"\n";
    vector<ld> v;
    v.pb(hhh);v.pb(mmm);v.pb(sss);

    ld a1,a2;
    if(t1 == 12) a1 = 0;
    else a1 = t1*30;
    if(t2 == 12) a2 = 0;
    else a2 = t2*30;
    if(a1 > a2)
        swap(a1, a2);
    bool f1 = true, f2 = true;
    for(auto it : v){
        //cout<<it<<" "<<a1<<" "<<a2<<"\n";
        if(it > a1 && it < a2)
            f1 = false;
        if(it > a2 || it < a1)
            f2 = false;
    }
    //cout<<f1<<" "<<f2<<"\n";
    if(f1 || f2)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
