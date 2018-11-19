#include <bits/stdc++.h>
using namespace std;
//make_tuple emplace_back next_permutation push_back make_pair second first setprecision

#if MYDEBUG
#include "lib/cp_debug.h"
#else
#define DBG(...) ;
#endif

using LL = long long;
constexpr LL LINF=334ll<<53;
constexpr int INF=15<<26;
constexpr LL  MOD=1E9+7;

struct Problem{
    int n;
    string s;
    void yes(){
        cout << "YES"<<"\n";
        exit(0);
    }
    void no(){
        cout << "NO"<<"\n";
        exit(0);
    }
    void solve(){
        vector<int> h(26),t(26);
        cin >>s ;
        cin >> n;
        for(int i=0; i<n; ++i){
            string tmp;
            cin >> tmp;
            if(tmp == s)yes();
            h[tmp[0]-'a']++;
            t[tmp[1]-'a']++;
        }
        if(h[s[1]-'a']>0 and t[s[0]-'a']>0)yes();
        else no();
    }
};

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    Problem p;
    p.solve();
    return 0;
}

