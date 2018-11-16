#include<bits/stdc++.h>
using namespace std;


/*#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;*/
#define sp ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define cps CLOCKS_PER_SEC
#define f first
#define s second
#define debug1(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<" "<<y<<"\n"
#define debug3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define nl cout<<"\n";
#define pq priority_queue
//#define inf 9999999
#define test cout<<"abcd\n";
#define pi pair<int,int>
#define pii pair<int,pi>
#define pb push_back
#define mxn 200000
#define mxnn 400005
#define ll long long
#define mod (ll)(1e9+7LL)


    ll dp[mxn];
    ll sum[mxn];
int main()
{
    sp;
    memset(dp,0,sizeof dp);
    memset(sum,0,sizeof sum);

    int t,k;
    cin >>t >>k;
    for(int i=1;i<k;i++) dp[i] = 1;
    dp [k] = 2;
    for(int i=k+1;i<mxn;i++){
        dp[i] = (dp[i-1] + dp[i-k])%mod;
    }
    for(int i=1;i<mxn;i++) sum[i] = (sum[i-1]+dp[i])%mod;
    while(t--){
        int a,b;
        cin >>a>>b;
        cout<<(sum[b] - sum[a-1] +mod)%mod<<"\n";
    }
return 0;
}
