/// Quality Over Quantity
 
#include <bits/stdc++.h>
 
#define FILE_NAME "C"
 
using namespace std;
using ll = long long;
 
#define pb push_back
#define pp pop_back
#define lli long long int
#define SZ(x) ((int) x.size())
#define all(x) x.begin(), x.end()
#define what_is(x) cerr << #x << " is " << x << endl;
 
void freekick() {
#ifndef ONLINE_JUDGE
    freopen(FILE_NAME".in", "r", stdin);
    freopen(FILE_NAME".out", "w", stdout);
#endif
}
 
const int N = 2e5 + 5;
const int DX[] = {+1, 0, -1, 0, +1, +1, -1, -1};
const int DY[] = {0, +1, 0, -1, +1, -1, +1, -1};
 
void freegoal() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
}
 
signed main() {
    freekick();
    freegoal();
    lli n, m, k;
    cin >> n >> m >> k;
    lli p[m];
    for (lli i = 0; i < m; i++)
        cin >> p[i];
    lli op = 0;
    lli i = 0;
    lli pg = k;
    while (i < m) {
        lli cnt = 0;
        while (i < m && p[i] <= pg) {
            cnt++;                  
            i++;
        }
        if (cnt) {
            op++;
            pg = pg + cnt;
        } else {
            lli trs = (p[i] - pg) / k;
            if (trs == 0)
                trs = 1;
            pg = pg + k * trs;
        }
    }
    cout << op << '\n';     
    return false;
}