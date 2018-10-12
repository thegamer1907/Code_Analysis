#include <bits/stdc++.h>

using namespace std;
const int N = (int)3e5 + 228;

int main() {
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    
    vector<string> v;
    while (n--) {
        string str;
        cin >> str;        
        v.push_back(str);
    }
    
    for (int i = v.size() - 2; i >= 0; i--) {
        int k = 1;
        int z = 0;
        for (int j = 1; j < min(v[i].size(), v[i + 1].size()); j++) {
            if (z == 0 && v[i][j] < v[i + 1][j]) {
                z = -1;
            } else if (z == 0 && v[i][j] > v[i + 1][j]) {
                z = +1;
                k = j;
                break;
            }
        }
        if (z == 0) {
            if (v[i].size() > v[i + 1].size()) {
                v[i].resize(v[i + 1].size());
            }
        } else if (z == -1) {
            
        } else if (z == +1) {
            k++;
            while (v[i].size() >= k)
                v[i].pop_back();
        }
    }
    
    for (const string &s : v) {
        cout << s << "\n";
    }
    
    return 0;
}