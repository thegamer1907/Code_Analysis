#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef long double ldb;

#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define nl '\n'
#define all(x) x.begin(),x.end()
#define sz(x) (int)(x).size()
#define mem(a,val) memset(a,val,sizeof(a))
#define toUpper(x) transform(x.begin(), x.end(), x.begin(),::toupper);
#define toLower(x) transform(x.begin(), x.end(), x.begin(),::tolower);
#define deci(n)    cout<<fixed<<setprecision(n)
#define bitcount(x) __builtin_popcountll(x)
#define max(a, b) (a < b ? b : a)
#define min(a, b) (a > b ? b : a)
#define rep(a,b) for(int i=(a);i<=(b);i++)

const int N=10006;
const int MAX = 1000*100+1;
const ll  INF = 1e18;
const int MOD = 1000*1000*1000+7;
const int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

vector<ll> v[N];
ll n,a[N],b[N],c[N];

int main(){
    cin>>n;
    rep(1,n){
    cin>>a[i];
    if(a[i]==0)
    b[i]++;
    else
    c[i]++;
    b[i]+=b[i-1];
    c[i]+=c[i-1];}
    
    int i=1,j=1,maxm=0;
    for(int i=1;i<=n;i++){
        for(int j=i; j<=n ;j++){
            int x=c[i-1];
            int y=c[n]-c[j];
            int z=b[j]-b[i-1];
            
            x=x+y+z;
            if(maxm<x)
            maxm=x;
        }
    }
    cout<<maxm;
    
}