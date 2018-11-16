/*
  Sohrab Roohi
*/

#include <bits/stdc++.h>

using namespace std;

const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    VI a;
    int numOnes = 0;
    for(int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        if(ai == 1) {
            numOnes++;
        }
        a.push_back(ai);
    }
    if(numOnes == n) {
        cout << n - 1;
        return 0;
    }
    VI b;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            b.push_back(1);
        }
        else {
            b.push_back(-1);
        }
    }
    int dp[n+1] = {};
    dp[0] = b[0];
    int maxValue = dp[0];
    for(int i = 1; i < n; i++) {
        dp[i] = max(dp[i-1] + b[i], b[i]);
        if(dp[i] > maxValue) {
            maxValue = dp[i];
        }
    }
    cout << numOnes + maxValue;
    return 0;
}