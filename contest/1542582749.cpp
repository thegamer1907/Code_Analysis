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
    int n, k;
    cin >> n >> k;
    int bits = 1 << k;
    vector<int> ns(bits);
    for(int i = 0; i < n; ++i){
        int num = 0;
        for(int j = 0; j < k; ++j){
            int a; cin >> a;
            num = num * 2 + a;
        }
        ns[num]++;
    }
    for(int bit = 1; bit < (1 << bits); ++bit){
        bool ok = true;
        vector<int> v(k);
        int num = 0;
        for(int i = 0; i < bits; ++i){
            if(bit & (1 << i)){
                if(ns[i] == 0){
                    ok = false;
                    break;
                }
                for(int j = 0; j < k; ++j){
                    if(i & (1 << j)){
                        v[j]++;
                    }
                }
                num++;
            }
        }
        if(!ok){ continue; }
        for(int i = 0; i < k; ++i){
            if(v[i] > num / 2){
                ok = false;
                break;
            }
        }
        if(ok){
            prints(num, v);
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';
}
