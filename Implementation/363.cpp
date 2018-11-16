#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define read ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<string> vs;
#define INF 0x3f3f3f3f
#define LLINF 4000000000000000000LL
#define MOD 1000000007
#define PI (2*acos(0.0))
#define EPS 1e-7
priority_queue<ii, vii, greater<ii> > pq;
//tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> t;

int main(){
    read;
    int n,k;
    cin>>n>>k;
    vi v(n);
    for(int i=0; i<n; ++i){
        cin>>v[i];
    }
    int ans = 0;
    int d = v[k-1];
    for(auto i : v){
        if(i >= d){
            if(i!=0)
                ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
