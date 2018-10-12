#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define sij 1000001
#define mod 1000000007
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define loop(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
template <class T>T cdiv(T ar,T den){return (ar/den)+(ar%den>0);}
template<typename TH> void _dbg(const char* sdbg, TH h) { cerr<<sdbg<<"="<<h<<"\n"; }
template<typename TH, typename... TA> void _dbg(const char* sdbg, TH h, TA... t) {
  while(*sdbg != ',')cerr<<*sdbg++; cerr<<"="<<h<<","; _dbg(sdbg+1, t...);
}
#ifdef dgb
#define dbg(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#define dbgv(x) {cerr <<#x <<" = "; for (auto &ele:x) cerr<<ele<< " ";nl; }
#define nl cerr<<endl;
#else
#define dbg(...) (__VA_ARGS__)
#define dbgv(x)
#define nl
#endif
template<class t>t mag(t a){return a>0?a:-a;}
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vl;
typedef vector<bool> vb;
vector<vi> divisor;
int n,m,x,l,r,entr;
vl mul;vi ar,spf;
void sieve(int n){
    n+=10;
    spf.resize(n);
    mul.resize(n);
    iota(spf.begin(),spf.end(),0);
    for(ll i=2;i*i<n;i++)
        if(spf[i]==i)
            for(ll j=i*i;j<n;j+=i)
                if(spf[j]==j)
                    spf[j]=i;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    ar.resize(n);
    loop(i,0,n) cin>>ar[i];
    int maxi=*max_element(ar.begin(),ar.end() );
    sieve(maxi);
    loop(i,0,n){
        while(ar[i]!=1){
            int k=spf[ar[i]];
            while(ar[i]%k==0)
                ar[i]/=k;
            mul[k]++;
        }
    }
    loop(i,2,maxi+1)
        mul[i]=mul[i-1]+mul[i];
    cin>>m;
    while(m--){
        cin>>l>>r;
        cout<<mul[min(maxi,r)]-mul[min(maxi,l)-1*(l<=maxi)]<<endl;
    }
}
