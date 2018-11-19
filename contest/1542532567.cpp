//#pragma GCC optimize("unroll-loops")
//#pragma GCC optimize ("Ofast")
//#pragma comment(linker, "/stack:200000000000")
//#pragma warning (disable : 4996)
//#pragma optimize ("gtsy", on)


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

//#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> vv(n);
    for(auto &t:vv) cin >> t;
    bool ans=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            string cur=vv[i]+vv[j];
            if(cur[0]==s[0] && cur[1]==s[1]) ans=true;
            if(cur[1]==s[0] && cur[2]==s[1]) ans=true;
            if(cur[2]==s[0] && cur[3]==s[1]) ans=true;
        }
    }
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}
