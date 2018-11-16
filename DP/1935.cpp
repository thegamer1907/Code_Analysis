#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, m, r;
    cin >> n >> m;
    vector<int>w(n);
    vector<int>s(n + 1);
    for(int i = 0; i < n; i++) {
        cin >> w[i];
    }
    
    set<int>p;
    
    for(int i = n - 1; i >= 0; i--) {
        int to = w[i];
        if (p.find(to) == p.end()) {
            p.insert(to);
            s[i] = s[i + 1] + 1;
        } else {
            s[i] = s[i + 1];
        }
    }
    
    for(int i = 0 ; i < m; i++) {
        cin >> r;
        cout << s[r-1] << endl;
    }
    
    return 0;
}
