#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
string pass;
string word[100];
int n;
bool is_sub(string& s, string& pass) {
    for(int i = 0; i < s.length() - 1; i++) {
        if(s[i] == pass[0] && s[i+1] == pass[1]) {
            return true;
        }
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> pass;
    cin >> n;
    bool has_begin = false, has_end = false;
    for(int i = 0; i < n; i++) {
        cin >> word[i];
    }
    bool can = false;
    for(int i = 0; i < n && !can; i++) {
        for(int j = 0; j < n && !can; j++) {
            string s;
            s += word[i];
            s += word[j];
            can |= is_sub(s, pass);
        }
    }
    cout << (can ? "YES" : "NO") << endl;
    return 0;
}
