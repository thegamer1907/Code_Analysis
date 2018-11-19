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


struct node {
    string middle, left, right;
    LL le = 0;
    LL ri = 0;
    set<int> below;

    node() { }
};


void formatLR(node &here) {
    if (len(here.left) > 64)
        here.left = here.left.substr(0, 64);
    if (len(here.right) > 64)
        here.right = here.right.substr(len(here.right)-64, 64);

    xx (len(here.left))
        if (here.left[len(here.left)-1-x] == '1')
            here.le |= (1LL << x);
    xx (len(here.right))
        if (here.right[len(here.right)-1-x] == '1')
            here.ri |= (1LL << x);
}


int main() {
    //ios_base::sync_with_stdio(false);     cin.tie(NULL);
    //cout << '\n';     //Avoid flushing with endl.
    cout.precision(16);


    int n;
    cin >> n;
    
    vector<node> store;
    ii (n) {
        node here;
        cin >> here.middle;
        here.left = here.right = here.middle;
        here.below.insert(len(store));

        formatLR(here);

        store.append(here);
    }

    int m;
    cin >> m;
    ii (m) {
        int a, b;
        cin >> a >> b;
        --a, --b;

        node an = store[a];
        node bn = store[b];
        node here;
        here.below = an.below;
        here.below.insert(all(bn.below));
        here.below.insert(len(store));

        here.left = an.left;
        if (len(an.left) < 64)
            here.left = an.left + bn.left;
        here.right = bn.right;
        if (len(bn.right) < 64)
            here.right = an.right + bn.right;

        
        string astr = an.right;
        string bstr = bn.left;
        if (len(astr) > 32)
            astr = astr.substr(len(astr)-32, 32);
        if (len(bstr) > 32)
            bstr = bstr.substr(0, 32);
        here.middle = astr + bstr;

        formatLR(here);
        //printf("Here %d left %d right %d\n", i, int(here.le), int(here.ri));
        store.append(here);

        //cout << i << ' ' << here.left << ' ' << here.right << '\n';

        int best_k = -1;
        kkk (1, 30) {
            int mask = (1 << (k)) - 1;
            xx ((1 << k)) {
                bool found = false;
                fe (it, here.below) {
                    //printf("Checking for i %d index %d x %d k %d\n", i, *it, x, k);
                    LL le = store[*it].le;
                    LL ri = store[*it].ri;
                    //printf("Have %d and %d\n", int(le), int(ri));
                    int lmi = len(store[*it].left);
                    yy (lmi - k + 1) {
                        LL sa = (le >> y) & mask;
                        if (sa == x) {
                            //printf("   found x %d k %d in index %d left\n",
                            //        x, k, *it);
                            found = true;
                            break;
                        }
                    }
                    yy (len(store[*it].right) - k + 1) {
                        LL sa = (ri >> y) & mask;
                        if (sa == x) {
                            //printf("   found x %d k %d in index %d right\n",
                            //        x, k, *it);
                            found = true;
                            break;
                        }
                    }
                    if (found) break;
                }
                if (!found) {
                    best_k = k-1;
                    break;
                }
            }
            if (best_k != -1)
                break;
        }
        cout << best_k << '\n';
    }

    
    

    return 0;
}

