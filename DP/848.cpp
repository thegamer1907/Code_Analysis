#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int countOnes = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) countOnes++;
    }

    int dp[n][n];
    int max = 0;


    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(j == i) {
                if(a[j] == 1){
                    dp[i][j] = countOnes - 1;
                }
                else {
                    dp[i][j] = countOnes + 1;
                }
            }
            else {
                if(a[j] == 1) {
                    dp[i][j] = dp[i][j - 1]  - 1;
                }
                else {
                    dp[i][j] = dp[i][j - 1]  + 1;
                }
            }
            if(dp[i][j] > max) max = dp[i][j];
        }
    }

    cout << max;

}

