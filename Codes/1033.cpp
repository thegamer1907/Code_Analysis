#include <bits/stdc++.h>

using namespace std;

int n, m, k;

int l[2], c[2];

string s;

int main() {
    cin >> n >> k >> s;
    for (int i = 0; i < s.size(); i ++) {
        c[s[i] == 'a'] ++;
        for (int j = 0; j < 2; j ++) {
            while(c[j] > k && l[j] <= i) {
                c[j] -= (s[l[j]] == (j ? 'a' : 'b'));
                l[j] ++;
            }
            m = max(m, i - l[j] + 1);
        }
    }   
    cout << m;
    return 0;
}