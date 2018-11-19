#include <bits/stdc++.h>

using namespace std;

string s;
int n;
bool fst[256], snd[256];

int main() {
    cin >> s;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string w;
        cin >> w;
        if(w[0] == s[0] && w[1] == s[1]) {
            cout << "YES" << endl;
            return 0;
        }
        fst[w[0]] = true;
        snd[w[1]] = true;
    }

    if(snd[s[0]] && fst[s[1]]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
