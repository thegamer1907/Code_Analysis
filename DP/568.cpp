#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;
    int n = a.size();
    int dp[n];
    dp[0] = 0;
    char prev = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] == prev){
            dp[i] = dp[i - 1] + 1;
        } else {
            dp[i] = dp[i - 1];
            prev = a[i];
        }
    }
    int k;
    cin >> k;
    int left, right;
    for (int i = 0;  i < k; i++){
        cin >> left >> right;
        cout << dp[right - 1] - dp[left - 1] << endl;
    }
    return 0;
}