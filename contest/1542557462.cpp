#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
typedef pair<ll,ll> pll;
#define pb push_back
#define dout if(debug) cout

const int MAXN = 1e5+1;
const ll inf_ll = 1e18;

int L = 0, R = 0;
ll val = 0;

int a[MAXN];
int cnt[MAXN];
bool debug = 0;

inline void add(int x){
    if(x>0){
       val+=cnt[x];
        cnt[x]++;
    }

}
inline void sub(int x){
    if(x>0){
       cnt[x]--;
        val-=cnt[x];
    }

}

inline move_r(int x){
    while(R<x){
        R++;
        add(a[R]);
    }
    while(R>x){
        sub(a[R]);
        R--;
    }
}

inline move_l(int x){
    while(L<x){
        sub(a[L]);
        L++;

    }
    while(L>x){
        L--;
        add(a[L]);
    }
}

ll dp[21][MAXN];


void solve(int j,int posL,int posR,int opL,int opR){
    if(posL > posR)
        return;
    int mid = (posL+posR)>>1;
    ll ans = inf_ll;
    int pos = -1;
    move_r(mid);
  //  dout << j <<" "<<L<<" "<<R<<" "<<opL<<" "<<opR<<" "<<mid<<endl;
  //  dout << val<<endl;
    for(int i=opL;i<=opR;++i){
        move_l(i);
  //      dout <<"here "<< i <<" "<<dp[j-1][i-1] + val<<" "<<val <<endl;
        if(dp[j-1][i-1] + val < ans){
            ans = dp[j-1][i-1] + val;
            pos = i;
        }
    }
    dp[j][mid] = ans;
    solve(j,posL,mid-1,opL,pos);
    solve(j,mid+1,posR,pos,opR);

}
void solve(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    for(int i=1;i<=n;++i){
        cin >> a[i];
        dp[0][i] = inf_ll;
    }
    for(int i=1;i<=k;++i){
        solve(i,1,n,1,n);
        for(int j=1;j<=n;++j){
            dout << dp[i][j]<<" ";
        }
        dout <<endl;
    }
    cout << dp[k][n]<<"\n";

}

int main(){
    #ifdef zxc
        debug = 1;
        freopen("input.txt","r",stdin);
    #endif // zxc
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   solve();
}

