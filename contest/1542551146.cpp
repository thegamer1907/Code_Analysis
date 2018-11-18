#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define For(i, a, b) for(int i=a; i<b; i++)
#define ffi For(i, 0, N)
#define ffj For(j, 0, K)
#define ffa ffi ffj
#define s <<" "<<
#define w cout
#define e "\n"
#define pb push_back
#define mp make_pair
#define a first
#define b second
#define int ll
const int MAXN=3000, INF=1000000000000000000;
///500,000,000
int N, K;
set<int> vals;
set<int>::iterator it, it2;

main() {
    //ifstream cin("test.in");
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> K;
    ffi {
        int have = 0;
        ffj {
            int a; cin >> a;
            have *= 2;
            have += a;
        }
        vals.insert(have);
    }
    //for (it = vals.begin(); it != vals.end(); it++) w<< (*it)<<e;
    for (it = vals.begin(); it != vals.end(); it++) {
        for (it2 = vals.begin(); it2 != vals.end(); it2++) {
            int at = (*it) & (*it2);
            //w<< at <<e;
            if (at == 0) {
                w<< "YES"<<e;
                return 0;
            }
        }
    }
    w<< "NO"<<e;
}
