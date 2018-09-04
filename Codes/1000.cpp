#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define mod 1000000007
#define MAX 100000000000000000
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(i=(ll)a;i<(ll)b;i++)
#define revrep(i,a,b) for(i=(ll)a;i>=(ll)b;i--)
#define ii pair<ll,ll>
#define MP make_pair
#define pb push_back
#define f first
#define se second
#define ll long long int
#define vi vector<ll>
ll modexp(ll a,ll b){ ll res = 1; while(b > 0){  if(b & 1) res = (res * a)%mod;  a = (a * a)%mod;  b/=2;  }  return res; }
#define rs resize
typedef tree< ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > OST;
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << endl;
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif

const ll N = 100009;
ll n,i,k,ans,idx,j,l,h,m;
string a;
ll dp[2][N];
int main()
{
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>n>>k>>a;
    if(k == 0){
        rep(i,0,n){
            j = i;
            while(j < n and a[j] == a[i]) j++;
            ans = max(ans,j - i);
            i = j - 1;
        }
        cout<<ans;
        return 0;
    }
    rep(i,1,n + 1){
        dp[0][i] = dp[0][i - 1] + (a[i - 1] == 'a');
        dp[1][i] = dp[1][i - 1] + (a[i - 1] == 'b');
        
    }
    rep(i,1,n + 1){
        //if we want all 'a' so b_search on 'b'
        l = 1; h = i;
        idx = 0;
        while(l <= h){
            m = (l + h) / 2;
            if(dp[1][i] - dp[1][m - 1] <= k)
                idx = m,h = m - 1;
            else
                l = m + 1;
        }
        //trace('a',i,idx);
        ans = max(ans,i - idx + 1);
        //if we want all 'b' so b_search on 'a'
        l = 1; h = i;
        idx = 0;
        while(l <= h){
            m = (l + h) / 2;
            if(dp[0][i] - dp[0][m - 1] <= k)
                idx = m,h = m - 1;
            else
                l = m + 1;
        }
        //trace('b',i,idx);
        ans = max(ans,i - idx + 1);
    }
    cout<<ans;
    return 0;
}