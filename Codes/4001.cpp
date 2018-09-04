//30, 06, 2018, 10:49:54 Rafaelcs cpp
#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
typedef long double ld;
typedef long long ll;

typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;

    cin >> n >> m;
    
    ll mt[n + 1][m + 1];
    ll best[n + 1];

    memset(best, 0, sizeof best);

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> mt[i][j];
        }
    }

    for(int i = 1 ; i <= m ; i++){
        ll lin = 1;

        for(int j = 1 ; j <= n ; j++){
            if(mt[j][i] < mt[j - 1][i]){
                lin = 1;
            }

            best[j] = max(best[j], lin);
            lin++;
        }
    }

    int q;

    cin >> q;

    while(q--){
        int l, r;

        cin >> l >> r;

        int n = r - l + 1;

        if(best[r] >= n){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}