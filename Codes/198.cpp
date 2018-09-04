#include<bits/stdc++.h>
#define fs first
#define sc second
#define pi 3.141592653589793238462643383279502884197
//#define e 2.7182818284590452353602874713526624977572

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vi;
typedef std::vector<bool> vb;
typedef std::vector<char> vc;
typedef std::pair<ll,ll> pii;
typedef std::vector<pii> vii;

using namespace std;
const ll mod=1e9+7;

inline ll rl(){
    ll res=0,neg=0;
    char c=getchar();
    while((c<'0'||c>'9')&&c!='-')c=getchar();
    if(c=='-')neg=1,c=getchar();
    while(c>='0'&&c<='9'){res=(res<<1)+(res<<3)+c-48;c=getchar();}
    return neg?-res:res;
}

inline void read(string &s){
    s="";
    char c=getchar();
    while(c!='\n'&&c!=' '){
        s+=c;
        c=getchar();
    }
}

inline void read(vi &a){
    for(int i=0;i<a.size();++i)
        a[i]=rl();
}

bool cmp(pii a,pii b){
    return a.sc<b.sc;
}

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n=rl();
    vi a(n);
    read(a);
    ll m=rl();
    vii b(m);
    for(int i=0;i<m;++i)
        b[i]={rl(),i};
    for(int i=1;i<a.size();++i)
        a[i]+=a[i-1];
    sort(b.begin(),b.end());
    for(int i=0,j=0;i<m;++i){
        while(a[j]<b[i].fs)++j;
        b[i].fs=j+1;
    }
    sort(b.begin(),b.end(),cmp);
    for(int i=0;i<m;++i)
        cout<<b[i].fs<<'\n';
    return 0;
}
