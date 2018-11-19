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
    int h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = h %12;
    t1 =t1%12;
    t2 = t2%12;
    h = h * all/12 +  m * all/(12*60) + s*all/(12*60*60);
    m = m * all/60 + s * all/3600;
    s = s * all/60;
    t1 = t1 * all/12;
    t2 = t2 * all/12;

    used[h] = 1;
    used[m] = 1;
    used[s] = 1;
    dfs(t1);
    if(used[t2]){
        cout <<"YES";
    } else {
        cout <<"NO";
    }



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

