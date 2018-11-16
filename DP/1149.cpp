#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    int n, digit;
    cin >> n;
    vector<int> cnt_zero(n+1, 0);
    int acc = 0;
    int adjust = 0;
    for(int i = 0; i < n; i++) {
        cin >> digit;
        if (digit == 1) {
            acc += 1;
            cnt_zero[i+1] = cnt_zero[i] - 1;
            cnt_zero[i+1] = max(0, cnt_zero[i+1]);
        } else {
            cnt_zero[i+1] = cnt_zero[i] + 1;
            adjust = max(adjust, cnt_zero[i+1]);
        }
    }
    if (acc == n)
        cout << acc - 1 << endl;
    else
        cout << acc + adjust << endl;
    return 0;
}


