#include <bits/stdc++.h>

using namespace std;

#if 1
    #define pv(x) cout<<#x<<" = "<<x<<"; ";cout.flush()
    #define pn cout<<endl
#else
    #define pv(x)
    #define pn
#endif

#ifdef ONLINE_JUDGE
    #define in cin
    #define out cout
#else
    ifstream in("gauss.in");
    ofstream out("gauss.out");
#endif

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
//#define pb push_back
#define mp make_pair
const int NMax = 5e2 + 5;
const ll inf_ll = 1e18 + 5;
const int inf_int = 1e9 + 5;
const int mod = 100003;
const double eps = 1e-7;
using zint = int;

int main() {
    string str;
    int haveB,haveS,haveC,pb,ps,pc;
    ll r;

    in >> str;
    in >> haveB >> haveS >> haveC >> pb >> ps >> pc >> r;

    int needB,needS,needC;
    needB = needS = needC = 0;
    for (char c : str) {
        if (c == 'B') {
            ++needB;
        }
        else if (c == 'S') {
            ++needS;
        }
        else {
            ++needC;
        }
    }
    
    ll pw = 1;
    for (;pw <= r + 200;pw <<= 1) ;
    pw >>= 1;
    
    // use binary search to find the greatest number of sandwiches x
    // such that we can make x sandwiches;
    ll ans = 0;
    while (pw) {
        ll addB = max(needB * (ans + pw) - haveB, 0LL);
        ll addS = max(needS * (ans + pw) - haveS, 0LL);
        ll addC = max(needC * (ans + pw) - haveC, 0LL);
        
        ll price = addB * pb + addS * ps + addC * pc;
        
        bool canDo = (price <= r) ? true : false;
        if (canDo) {
            ans += pw;
        }
        
        pw >>= 1;
    }
    
    out << ans;

    return 0;
}

