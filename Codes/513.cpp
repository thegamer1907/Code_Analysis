#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <list>
#include <chrono>
#include <fstream>
#include <ctime>
#include <random>
#include <array>

// melnik SABAKA

using namespace std;
using namespace std::chrono;

const int mod = int(1e9) + 7;
//const int SZ = 10100;
//const int MX = 210500;
using pii = pair<int,int>;
using pll = pair<long long, long long>;
#define ll long long
#define sqr(x) (x)*(x)
#define FREIN(file) freopen(file, "rt", stdin)

#define VA_NUM_ARGS(...) VA_NUM_ARGS_IMPL_((0,__VA_ARGS__, 6,5,4,3,2,1))
#define VA_NUM_ARGS_IMPL_(tuple) VA_NUM_ARGS_IMPL tuple
#define VA_NUM_ARGS_IMPL(_0,_1,_2,_3,_4,_5,_6,N,...) N
#define macro_dispatcher(macro, ...) macro_dispatcher_(macro, VA_NUM_ARGS(__VA_ARGS__))
#define macro_dispatcher_(macro, nargs) macro_dispatcher__(macro, nargs)
#define macro_dispatcher__(macro, nargs) macro_dispatcher___(macro, nargs)
#define macro_dispatcher___(macro, nargs) macro ## nargs
#define DBN1(a)           cerr<<#a<<"="<<(a)<<"\n"
#define DBN2(a,b)         cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<"\n"
#define DBN3(a,b,c)       cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<"\n"
#define DBN4(a,b,c,d)     cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<"\n"
#define DBN5(a,b,c,d,e)   cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<", "<<#e<<"="<<(e)<<"\n"
#define DBN6(a,b,c,d,e,f) cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<", "<<#e<<"="<<(e)<<", "<<#f<<"="<<(f)<<"\n"
#define DBN(...) macro_dispatcher(DBN, __VA_ARGS__)(__VA_ARGS__)

const int magic = 3;

void solve();
//void init();

void dump(const vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cerr << a[i] << ' ';
    }
    cerr << endl;
}

template<typename T>
void dump(const array<T, 20>& a) {
    for (int i = 0; i < a.size(); i++) {
        cerr << a[i] << ' ';
    }
    cerr << endl;
}

int main(int argc, char** argv)
{
#ifdef LOCAL
    freopen("../in.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
//        cin >> t;
//        init();
    while(t--){
        solve();
    }
    return 0;
}
// Solution ***********************************************************************************************

const int MX = 300300;
//int a[MX];

vector<int> a(2, 2);

bool check(int x) {
    int s = 0;
    while (x) {
        s += x % 10;
        if (s > 10) return false;
        x /= 10;
    }
    return s == 10;
}

void solve() {
    int k;
    cin >> k;
    int ans = 0;
    while (k) {
        ans++;
        if (check(ans)) k--;
    }
    cout << ans << endl;

}