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
    string pass; cin >> pass;
    int n; cin >> n;
    vector<string> ss(n);
    for(int i = 0; i < n; ++i){
        cin >> ss[i];
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            string s = ss[i] + ss[j];
            if(s.find(pass) != string::npos){
                cout << "YES" << '\n';
                return 0;
            }
        }
    }
    cout << "NO" << '\n';
}
