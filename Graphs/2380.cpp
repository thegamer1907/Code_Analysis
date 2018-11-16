#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

#define print_time cerr << "Time elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << "ms\n";
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using namespace __gnu_pbds;

typedef long long LL;
typedef long double LD;
typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update > pbds;

#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
#define dbv(v) cout << "Printing "#v << " --> \n"; for(int i=0;i<v.size();i++) cout << v[i] << " "; cout << "\n";
#define dbst(st) cout << "Printing "#st << " --> \n"; for(auto i=st.begin();i!=st.end();i++) cout << *i << " "; cout << "\n";
#define dbmp(mp) cout << "Printing "#mp << " --> \n"; for(auto i=mp.begin();i!=mp.end();i++) cout << #mp"[" << i->first << "]"<< " = " << i->second << "\n";
#define dbvv(vv) cout << "Printing "#vv << " --> \n"; for (auto c : vv) { for (auto d : c) cout << d << " "; cout << "\n";}
template <typename Arg1>void ZZ(const char* name, Arg1&& arg1){std::cout << name << " = " << arg1 << std::endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    std::cout.write(names, comma - names) << " = " << arg1;
    ZZ(comma, args...);
}
template<typename T> T pow(T a,T b, LL m){T ans=1; while(b>0){ if(b&1) (ans*=a)%m; b>>=2; (a*=a)%m; } return ans%m; }
 
const int N = 2e3 + 5;
int p[N], h[N];
int height(int i){
    if(h[i]==-1){
        if(p[i]==-1)h[i]=1;
        else h[i]=1+height(p[i]);
    }
    return h[i];
}
int32_t main(){
    fast_io

    int n;
    cin>>n;
    memset(h,-1,sizeof(h));

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        p[i]=x;
    }
    int ans=0;
    for (int i=1;i<=n;i++){
        ans=max(ans,height(i));
    }
    cout<<ans;
    print_time
}