#include "bits/stdc++.h"
using namespace std;
const int N = 5e5 + 5;
const int mod = 1e9 + 7;
const long long lim = (long long) 1e14 + 1;
int n , m;
int q;
int l , r;
string arr[N];
string ans[N];
int main() {
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> arr[i];
    if(n == 1) {
        cout << arr[1] << endl;
        return 0;
    }
    ans[n] = arr[n];
    for(int i = n - 1; i >= 1; --i) {
        string res = "";
        res += '#';
        bool f = 0;
        for(int j = 1; j < (int) arr[i].size(); ++j) {
            if(!f && ((j > (int) arr[i + 1].size()) | (arr[i][j] > arr[i+1][j]) ) ) {
                break;
            }
            if(f) {
                res += arr[i][j];
                continue;
            }
            if(j < (int) arr[i + 1].size()) {
                if(arr[i][j] <= arr[i + 1][j]) {
                    res += arr[i][j];
                }
                f |= (arr[i][j] < arr[i + 1][j]);
            }
        }
        ans[i] = res;
        arr[i] = res;
    }
    for(int i = 1; i <= n; ++i) cout << ans[i] << endl;
}