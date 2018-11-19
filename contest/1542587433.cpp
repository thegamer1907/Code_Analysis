#include<algorithm>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<sstream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using uint = unsigned int;
using ll = long long;
enum : int { M = (int)1e9 + 7 };
enum : ll { MLL = (ll)1e18L + 9 };
using namespace std;
#ifdef LOCAL
#include"rprint2.hpp"
#else
#define FUNC(name) template <ostream& out = cout, class... T> void name(T&&...){ }
FUNC(prints) FUNC(printe) FUNC(printw) FUNC(printew) FUNC(printb) FUNC(printd); FUNC(printde);
#endif

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h0, m0, s0, t1, t2;
    cin >> h0 >> m0 >> s0 >> t1 >> t2;
    if(h0 == 12){ h0 = 0; }
    if(t1 == 12){ t1 = 0; }
    if(t2 == 12){ t2 = 0; }
    int s = s0 * 720,
        m = m0 * 720 + 12 * s0,
        h = h0 * 5 * 720 + 60 * m0 + s0;
    t1 = t1 * 5 * 720;
    t2 = t2 * 5 * 720;
    int tl = 12 * 3600;
    for(int t = t1; ; t = (t + 1) % tl){
        if(t == h || t == m || t == s){ break; }
        if(t == t2){
            cout << "YES" << '\n';
            return 0;
        }
    }
    for(int t = t1; ; t = (t - 1 + tl) % tl){
        if(t == h || t == m || t == s){ break; }
        if(t == t2){
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';
}
