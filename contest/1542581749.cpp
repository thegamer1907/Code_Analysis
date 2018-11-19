#include <bits/stdc++.h>
using namespace std;

#define len(x)  (int((x).size()))
#define append push_back
#define pp make_pair
#define ff(a, b)    for (int a = 0; a < int(b); ++a)
#define kk(n)    ff(k, n)
#define xx(n)    ff(x, n)
#define yy(n)    ff(y, n)
#define ii(n)    ff(i, n)
#define fff(a, b, c) for (int a = int(b); a < int(c); ++a)
#define kkk(a, b) fff(k, a, b)
#define xxx(a, b) fff(x, a, b)
#define yyy(a, b) fff(y, a, b)
#define iii(a, b) fff(i, a, b)
#define bb begin()
#define ee end()
#define uu first
#define vv second
#define all(x)  (x).bb, (x).ee
#define ite(v)   decltype((v).bb)
#define fe(i, v) for(ite(v) i = (v).bb; i != (v).ee; ++i)
#define err(...)    { fprintf(stderr, __VA_ARGS__); fflush(stderr); }
#define zz(array, byte)   memset(array, byte, sizeof(array));

using LL = long long;
using DD = long double;
using pii = pair<int, int>;


const LL  INFLL  = 0x7f7f7f7f7f7f7f7fLL;
const int INFint = 0x7f7f7f7f;  //Works with memset(..).
   




int main() {
    ios_base::sync_with_stdio(false);     cin.tie(NULL);
    //cout << '\n';     //Avoid flushing with endl.
    cout.precision(16);


    int n, k;
    cin >> n >> k;
    set<int> avail;

    ii (n) {
        int here = 0;
        xx (k) {
            int oi;
            cin >> oi;
            if (oi)
                here |= (1 << x);
        }
        avail.insert(here);
    }

    bool rr = false;
    vector<int> all_problems(all(avail));
    ii (len(all_problems))
        xx (len(all_problems))
            if ((all_problems[i] & all_problems[x]) == 0)
                rr = true;

    if (rr)
        cout << "YES\n";
    else
        cout << "NO\n";

    

    return 0;
}

