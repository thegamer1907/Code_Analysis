#include <bits/stdc++.h>

using namespace std;

set <pair< pair<int, int>, int> > s;
int n, m;
int a[100010];



int main () {
    cin >> n; int pre = 1;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        s.insert( { {pre, pre + x - 1}, i} );
        //cout << pre << " " << pre + x - 1 << endl;
        pre += x;
    }
    
    int m; cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int x; cin >> x;
        auto o = s.lower_bound({{x, 1e9}, 1e9}); --o;
//        cout << o -> first.first  << " " << o -> first.second << " " << o -> second << endl;
        cout << o->second << endl;
    }
    
}