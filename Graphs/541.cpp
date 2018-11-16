#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdint>
#include <string>

#define LL int64_t
#define VI vector<int>
#define VB vector<bool>
#define VVB vector<VB>

#define ALL(v) begin(v),end(v)
#define FOR(i,n) for(int i=0; i<n; ++i)

using namespace std;

string doubler(int n, string const& before) {
    string after = before;
    FOR(i,n-1) {
        if (before[i] != before[i+1] && before[i] == 'B') {
            swap(after[i], after[i+1]);
        }
    }
    return after;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    FOR(i,t) {
        s = doubler(n, s);
    }
    cout << s << "\n";
}
