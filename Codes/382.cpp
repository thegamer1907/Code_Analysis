#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> //required
#include <ext/pb_ds/tree_policy.hpp> //required
using namespace __gnu_pbds; //required 
template <typename T> using ordered_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

#if DEBUG && !ONLINE_JUDGE
    #include "header.h"
#else
    #define debug(args...)
#endif

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef pair<int,ii> iii;
typedef vector<pair<ii,int> > viii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef map<int,int> mii;
typedef map<char,int> mci;
typedef long long lli;
typedef vector<lli> vlli;


#define pb push_back
#define trav(a,x) for(auto& a : x)
#define all(x) x.begin(),x.end()
#define SZ(x) (int)(x).size()
#define IT iterator
#define GR greator
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define UM unordered_map
#define PQ priority_queue
#define mp(a,b) make_pair(a,b)
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORd(i,a,b) for(auto i=(a);i>=b;i--)
#define TR(c,it) for(auto it:(c))
#define init(v,n) (v).clear();(v).resize(n)
#define initi(v,n,i) (v).clear();(v).resize(n,i)
#define sqr(x) ((x)*(x))
#define LC(x) ((x)<<1)
#define RC(x) (((x)<<1)|1)
#define rep(i,a,b) for(auto i=(a);i<b;i++)

#define INF (int)1e9
#define EPS 1e-9;
#define PI 3.14159265359
#define swap(a,b) { auto c = a; a=b; b=c; }
#define EULER 2.7182818284
#define MOD 1000000007
void preprocess(void) {
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(20);
    preprocess();
    int k; cin>>k;
    lli ans=19;
    lli d,n=0,p;
    while(true) {
        d=ans;
        p=0;
        while(d>0) {
            p+=d%10; d=d/10;
        }
        if(p==10) n++;
        if(n==k) {
            cout<<ans<<endl;
            break;
        }
        ans+=9;
        

    }
}

