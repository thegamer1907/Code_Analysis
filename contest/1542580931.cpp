#include<bits/stdc++.h>
using namespace std;

bool ansnull(int a, int b, int c, int d) {
    int ans = 0;
    if (a != 0)
        ++ans;
    if (b != 0)
        ++ans;
    if (c != 0)
        ++ans;
    if (d != 0)
        ++ans;
    if (ans >= 2)
        return true;
    else
        return false;
}


int main() {
    //freopen("input.txt", "r", stdin);
    int a[100010][5];
    int n, k;
    cin >> n >> k;
    for (int i = 0; i <= n; ++i) 
        for (int j = 1; j <= 4; ++j) 
            a[i][j] = 0;
            
    for (int i = 1; i <= n; ++i) 
        for (int j = 1; j <= k; ++j) 
            cin >> a[i][j];
        
    vector<int> v(20, 0);
    for (int i = 1; i <= n; ++i) {
        int sum = 0;
        for (int j = 1; j <= 4; ++j) {
            sum += a[i][j] * (1 << (4 - j));
        }
        v[sum]++;
    }
    if (v[0] != 0) {
        cout << "YES";
        return 0;
    }
    if (ansnull(v[1], v[2], v[4], v[8])) {
        cout << "YES";
        return 0;
    }
    int ind = -1;
    for (int i = 0; i <= 3; ++i)
        if (v[(1 << i)] != 0)
            ind = (1 << i);
    //cout << ind;
    if (ansnull(v[12], v[3], 0, 0)) {
        cout << "YES";
        return 0;
    }
    if (ansnull(v[6], v[9], 0, 0)) {
        cout << "YES";
        return 0;
    }
    if (ansnull(v[5], v[10], 0, 0)) {
        cout << "YES";
        return 0;
    }
    
    if (ind != -1) {
        if (v[15 - ind] != 0) {
            cout << "YES";
            return 0;
        }
        if (ind == 1) {
            if (v[12] != 0 || v[6] != 0 || v[10] != 0) {
                cout << "YES";
                return 0;
            }
        }
        if (ind == 2) {
            if (v[12] != 0 || v[9] != 0 || v[5] != 0) {
                cout << "YES";
                return 0;
            }
        }
        if (ind == 4) {
            if (v[9] != 0 || v[3] != 0 || v[10] != 0) {
                cout << "YES";
                return 0;
            }
        }
        if (ind == 8) {
            if (v[6] != 0 || v[3] != 0 || v[5] != 0) {
                cout << "YES";
                return 0;
            }
        }
    }
            
        
    cout << "NO";    
    
    
    
    
    return 0;
}
