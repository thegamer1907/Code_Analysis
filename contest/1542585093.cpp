#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
typedef pair<ll,ll> pll;

#define fi first
#define se second
#define pb push_back
#define rank kgjksjsias
const int MAXN = 300000+10;
char used[MAXN];

int all = 12 * 3600;
void dfs(int x){
    x = x % all;
    if(used[x])
        return;
    used[x] = 1;
    dfs(x+1);
    dfs(x+all-1);
}


void solve(){
   int n,k;
   cin >> n >> k;
   map<int,int> mp;
   for(int i=1;i<=n;++i){
        int mask = 0;
        for(int e=0;e<k;++e){
            int x;
            cin >> x;
            mask |=(x<<e);
        }
        mp[mask]++;
   }
   if(mp.count(0)){
    cout <<"YES";
    return;
   }
   int all = (1<<k)-1;
   for(int mask = 0;mask<=all;++mask){
    for(int mask1=0;mask1<=all;++mask1){
        if((mask&mask1)==0 && mp[mask] && mp[mask1]){
            cout <<"YES";
            return;
        }
    }
   }
   for(int mask = 0;mask<(1<<k);++mask){
      if(mp[mask] && mp[mask^all]){
        cout <<"YES";
        return;
      }
   }
   cout <<"NO";
}
int main(){
    #ifdef zxc
        freopen("input.txt","r",stdin);
   //     freopen("output.txt","w",stdout);
    #endif // zxc
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();;
}

