#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define erase_unique(x) (x).erase(unique(all(x)),(x).end())
#define sp(x) setprecision(x) << fixed
#define mod(x,m) ((((x)%(m))+(m))%(m))
#define all(x) (x).begin(),(x).end()
#define dcl(x,y) (x%y?x/y+1:x/y)
#define cube(x) (1LL*(x)*(x)*(x))
#define sqr(x) (1LL*(x)*(x))
#define bg1 cout << '!'
#define bg2 cout << '?'
#define ln cout << '\n'
#define pb push_back
#define mp make_pair
#define endl '\n'
#define file_all file_in,file_out
#define file_in freopen("input.txt","rt",stdin)
#define file_out freopen("output.txt","wt",stdout)

const ll LLINF=8e18;
const int MOD=1e9+7;
const int INF=2e9;
const int N=1e5;

ll n,l,r;

bool test(ll n,ll k){
    ll tn=n,p=0;
    while(tn>0){
        ll pk=min(tn,k);
        tn-=pk;
        //cout << tn << ' ';
        p+=pk;
        tn-=tn/10;
        //cout << tn << ' ';
    }
    //cout << p << ' ';
    return (p*2>=n);
}

int main(){
    fast_io;
    cin >> n;
    l=0; r=n;
    while(l+1<r){
        ll m=(l+r)/2;
        if (test(n,m)) r=m;
        else l=m;
    }
    cout << r;


    return 0;
}



































