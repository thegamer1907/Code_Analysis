#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 10;
int pi[MAXN];
string s;
int child[MAXN];
int main () {
    cin >> s;
    int n = s.size();
    int k = 0;
    for (int i = 1; i < n; ++i) {
        while(k && s[i] != s[k])
            k = pi[k];
        if (s[i] == s[k]) {
            ++k;
            ++child[k];
        }
        pi[i + 1] = k;
        }  
    if (pi[n] && child[pi[n]] > 1) {
        for (int i = 0; i < pi[n]; cout << s[i++]);
        return 0;
    }
    if (pi[pi[n]]) {
        for (int i = 0; i< pi[pi[n]]; cout << s[i++]);
        return 0;
    }
    cout << "Just a legend";
    return 0;
}