#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;

int main() {
    ios_base::sync_with_stdio(false);
    string str;
    cin >> str;
    int n;
    cin >> n;
    bool f1 = false;
    bool f2 = false;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s == str) {
            f1 = true;
            f2 = true;
        }
        if (s[1] == str[0]) {
            f2 = true;
        }
        if (s[0] == str[1]) {
            f1 = true;
        }
    }
    if(f1 && f2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
