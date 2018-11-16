#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);
    set<char> st;
    for(char c : s) {
        if('a' <= c && c <= 'z') st.insert(c);
    }
    cout << st.size() << '\n';
    return 0;
}

