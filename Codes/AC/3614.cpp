//#pragma GCC optimize("unroll-loops")
//#pragma GCC optimize ("Ofast")
//#pragma comment(linker, "/stack:200000000000")

#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <set>
#include <stack>
#include <cassert>
#include <queue>
#include <deque>

using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m,k;
    cin >> n >> m >> k;
    int x,s;
    cin >> x >> s;
    vector<pair<int, int>> tp1(m);
    vector<pair<int, int>> tp2(k);
    for(auto &t:tp1) cin >> t.second;
    for(auto &t:tp1) cin >> t.first;
    for(auto &t:tp2) cin >> t.second;
    for(auto &t:tp2) cin >> t.first;
    
    int ans=n*x;
    for(auto cur_1:tp1){
        if(cur_1.first>s) continue;
        pair<int, int> srch={s-cur_1.first,1e9+7};
        int ind=upper_bound(tp2.begin(), tp2.end(),srch)-tp2.begin()-1;
        if(ind<0){
            ans=min(ans,n*cur_1.second);
            continue;
        }
        pair<int, int> cur_2=tp2.at(ind);
        int nd=n-cur_2.second;
        if(nd<0){
            ans=0;
            continue;
        }
        ans=min(ans,nd*cur_1.second);
    }
    for(auto t:tp2){
        if(t.first>s) continue;
        ans=min(ans,x*(n-t.second));
    }
    cout << max(ans,0LL) << endl;
}
