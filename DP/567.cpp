#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int m, l, r;
    string str;
    cin >> str >> m;
    vector<int>dp(str.length() + 1, 0);
    for(int i = 0; i < str.length(); i++) {
        if (str[i] == str[i+1]) {
            dp[i + 1] = dp[i] + 1;
        } else {
            dp[i + 1] = dp[i];
        }
    }
    
    for(int i = 0; i < m; i++) {
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << endl;
    }
    
    return 0;
}
