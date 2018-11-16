#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, numOfBitcoins;
    cin >> n >> numOfBitcoins;
    
    vector<int> a(n), dp(n), used(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = ((i - 1 >= 0) ? dp[i - 1] : 0) + ((a[i] & 1) ? 1 : -1);
    }
    
    int cutCount = 0;
    int cutIndex = -1;
    
    while (1) {
        for (int i = 0; i < n - 1; i++) {
            if (!dp[i] && !used[i]) {
                int curCutCost = abs(a[i] - a[i + 1]);
                int bestCutCost = (cutIndex == -1) ? INT_MAX : abs(a[cutIndex] - a[cutIndex + 1]);
                if (curCutCost < bestCutCost && numOfBitcoins >= curCutCost) {
                    cutIndex = i;
                }
            }
        }
        if (cutIndex == -1) {
            break;
        }
        cutCount++;
        used[cutIndex] = 1;
        numOfBitcoins -= abs(a[cutIndex] - a[cutIndex + 1]);
        
        cutIndex = -1;
    }
    
    cout << cutCount << endl;
}
