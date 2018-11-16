#include <bits/stdc++.h>
#include <ext/rope>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#define ll long long
#define ld long double
#define endl "\n"


using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;

typedef tree<
        int,
        null_type,
        less<int>,
        rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set;

ll mod=1e9+7;

int main() {

    cin.tie(0);
    cin.sync_with_stdio(0);

    ll sum[100005];
    memset(sum,0, sizeof(sum));
    int t,k;
    cin>>t>>k;
    for(int i=0;i<100005;i++){
        if(i<k)sum[i]=1;
        else{
            sum[i]=sum[i-1]+sum[i-k];
            sum[i]%=mod;
        }
    }

    for(int i=1;i<100005;i++){
        sum[i]+=sum[i-1];
        sum[i]%=mod;
    }
    while(t--){
        int a,b;
        cin>>a>>b;
        ll ans=sum[b]+mod-sum[a-1];
        ans%=mod;
        cout<<ans<<endl;
    }



    return 0;
}
