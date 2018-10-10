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



#define ll long long
#define sp ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define cps CLOCKS_PER_SEC
#define f first
#define s second
#define debug1(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<" "<<y<<"\n"
#define debug3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define nl cout<<"\n";
#define pq priority_queue
#define inf 0x3f3f3f3f
#define test cout<<"abcd\n";
#define pi pair<int,int>
#define pii pair<int,pi>
#define pb push_back
#define mxn 200005
#define mxnn 400005
#define mod (ll)1e8
ll dp[mxn][3];
int main(){
sp;
int n,k;
cin>>n>>k;
int arr[n+1];
for(int i=1;i<=n;i++) cin>>arr[i];
map<ll,ll>mp0,mp1,mp2;
memset(dp,0,sizeof dp);
for(int i=1;i<=n;i++){
        dp[i][0]=1;
    if(arr[i]%k==0){
            dp[i][1]+=mp0[arr[i]/k];
    }
    if(arr[i]%(k*k)==0){
            dp[i][2]+=mp1[arr[i]/(k)];
        }
mp0[arr[i]]++;
mp1[arr[i]]+=dp[i][1];
    } ll ans=0;
for(int i=1 ;i<=n;i++) ans+=dp[i][2];
cout<<ans;
return 0;
}
