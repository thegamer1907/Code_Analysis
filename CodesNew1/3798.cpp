#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define sij 1000001
#define mod 1000000007ll
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define loop(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
template <class T>T cdiv(T num,T den){return (num/den)+(num%den>0);}
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
ll n,tot;
vl ar;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    ar.resize(n);
    loop(i,0,n)
        cin>>ar[i],tot+=ar[i];
    dbg(tot);
    cout<<max(*(max_element(ar.begin(),ar.end())),cdiv(tot,n-1));
}
/*
2
10000000000014
20000000000000

*/
