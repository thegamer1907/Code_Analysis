#include <bits/stdc++.h>

#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define ep emplace
#define MOD 1000000007LL
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define for1(i, n) for(int i = 1; i <= int(n); i++)
#define ford(i, n) for(int i = int(n) - 1; i >= 0; i--)
#define fore(i, a, b) for(int i = int(a); i <= int(b); i++)
#define debug(x) cerr << #x << " = " << x << endl

using namespace std;

typedef long long ll;

const ll oo = 1000000000000000000;
const int N = 100005;

int cnt[20];
int t[5];
int main(){

    int n, k;

    scanf("%d %d", &n, &k);

    forn(i, n){
        int x, q = 0, o = 0;
        forn(j, k){
            scanf("%d", &x);
            if(!x) q |= (1 << j);
            else o |= (1 << j);
        }
        if(cnt[o]) return printf("Yes\n"), 0;
        cnt[q]++;
    }

    forn(bit, 1 << (1 << k)){
        memset(t, 0, sizeof t);
        int tot = 0;
        forn(i, 1 << k) if(bit & (1 << i)){
            if(cnt[i]){
                forn(j, k) if(i & (1 << j)) t[j]++;
                tot++;
            }
        }
        if(!tot) continue;
        int can = 1;
        forn(i, k) if(t[i]*2 < tot) can = 0;
        if(can) return printf("Yes\n"), 0;
    }

    printf("NO\n");



    return 0;
}
