#include <bits/stdc++.h>
using namespace std;

map<string, bool> mmp;

int main(void) {
    int n, m, ok = false;
    cin >> n >> m;
    
    for (int i = 1; i <= n; ++i) {
        string str;
        cin >> str;
        
        mmp[str] = true;
    }
    
    for (int i = 1; i <= m; ++i) {
        string str;
        cin >> str;
        
        if (mmp[str])
            ok ^= true;
    }
    
    n += ok;
    if (n <= m)
        cout << "NO";
    else
        cout << "YES";
    
    return 0;
}
