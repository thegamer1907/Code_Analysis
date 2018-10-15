#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> tab(n);
    vector<int> sum(n,0);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        tab[i] = a;
        if(i > 0) sum[i] = sum[i-1]+a;
        else sum[i] = a;
    }
    int tot = 0;
    int killedSoFar = 0;
    //for(int c : sum) cout << c << ' ';
    //cout << endl;
    for(int i = 0; i < q; i++){
        int a;
        cin >> a;
        tot += a;
        auto it = lower_bound(sum.begin(), sum.end(),tot);
        int dist = it-sum.begin();
        //cout << dist << endl;
        if(it != sum.end() && sum[dist] <= tot)dist++;
        killedSoFar = dist;
        if(killedSoFar == n){
            killedSoFar = 0;
            tot = 0;
        }
        cout << n - killedSoFar << endl;
    }
}
