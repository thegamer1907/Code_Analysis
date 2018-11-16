#include <bits/stdc++.h>

using namespace std;

#define fr first
#define sc second
#define mp make_pair
#define pb push_back

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const int inf = 1e9 + 12435;
const ll intll = 1e18 + 123;
const int maxn = 1e6 + 123;
const ld eps = 1e-7;
const ll mod = 1e9 + 7;

void solve(){
    int n, a, b;
    int cnt = 0;
    cin >> n >> a >> b;
    while(n != 2){
        cnt++;
        n /= 2;
        a = (a + 1)/2;
        b = (b + 1)/2;
        if(a == b){
            cout << cnt;
            return;
        }
    }
    cout << "Final!";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    solve();
//    int t;
//    cin >> t;
//    while(t--)
//        solve();
    return 0;
}
