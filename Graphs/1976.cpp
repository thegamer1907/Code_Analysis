#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i=0;i<n;++i)
#define tr(c, it, cond) for(auto it=c.begin(); cond and it != c.end(); ++it)
#define hell 1000000007
#define lli long long int
#define all(C) C.begin(), C.end()
#define pb push_back
#define hash unordered_map
#define vi vector<int>
#define pii pair<int,int>
#define index(V, ele) distance(V.begin(), find(all(V), ele))
#define get_sum(sum, l, r) ((l == 0) ? sum[r] : (sum[r] - sum[l - 1]))
#define N 100005

lli t,n,k,m,q,cnt;

vi T[N];
lli accm[N],maxl[N];
bool visited[N];

void DFS(int i, int pa){
    visited[i] = true;
    if (accm[i] != 0) // let it be
        accm[i] = accm[pa]+1;
    
    maxl[i] = max(maxl[pa], accm[i]);

    if (i!=1 and T[i].size() < 2){ // its a leaf
        if (maxl[i] <= m)
            ++cnt;
        return ;
    }

    // else recurr
    for(int j: T[i])
        if (!visited[j])
            DFS(j,i);
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.precision(20);

    cin >> n >> m;
    rep(i,n){
        cin >> maxl[i+1];
        accm[i+1] = maxl[i+1] , visited[i+1] = false;
    }

    rep(i,n-1){
        cin >> t >> k;
        T[t].pb(k);
        T[k].pb(t);
    }

    cnt = 0; //count

    accm[0] = maxl[0] = 0;
    DFS(1,0);

    cout << cnt;

    // rep(i,n)
        // cout << maxl[i+1] << ' ';

    return 0;
}
