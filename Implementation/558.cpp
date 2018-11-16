#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long int ll;
typedef unsigned long long int  ull;
typedef long double ld;
typedef vector<int > vi;
typedef vector<vi> vii;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef pair<int,int> ii;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORJ(j,a,b) for(int j=(a);j<(b);j++)
#define rof(i,a,b) for(int i=(a);i<=(b);i--)
#define f0(i,n) FOR(i,0,n)
#define f1(i,n) FOR(i,1,n)
#define mem(a,v) memset(a,v,sizeof a)
#define all(a) a.begin(),a.end()
#define INDEX(arr,v) (lower_bound(all(arr),v)-arr.begin())
#define ff first
#define ss second
#define ppb pop_back()
#define endl '\n'
#define rev(a) reverse(all(a))
#define s(a) sort(all(a))
#define sp(a,cmp) sort(all(a),cmp)
#define len(a) (int)(a.length())
#define by(x) [](const auto & a,const auto & b) {return a.x<b.x}
#define ndb(a) a.erase(unique(all(a)),a.end())
#define racine(a,n) pow((a),1.0/(n))
#define Sin(s) gets(s)
#define nl printf("\n")
#define YES printf("YES\n")
#define NO printf("NO\n")
#define outnl(a) cout<<(a)<<endl
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define in freopen("input.txt","r",stdin)
#define out freopen("output.txt","w",stdout)
#define sz(n) n.size()
#define clr(v) v.clear()
#define LCM(a,b) (a/__gcd(a,b))*b
#define gcd(a,b) __gcd(a,b)
#define AND &&
#define OR ||
int main() {
    fast
    int n,k;
    cin>>n>>k;
    int x,c=0;
    vi v;
    f0(i,n){
        cin>>x;
        v.pb(x);
    }
    f0(i,n){
        if((v[k-1]<=v[i])&&(v[i]>0)){
            c++;
        }}
    cout<<c;
    return 0;
}