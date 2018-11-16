#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int arr[s.length()];
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != s[i+1] || i == s.length()-1) arr[i] = 0;
        else arr[i] = 1;
    }

    for(int i = 1; i < s.length(); i++) arr[i] += arr[i-1];

    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        if(l == 1) cout << arr[r-2] << endl;
        else cout << arr[r-2]-arr[l-2] << endl;
    }


    return 0;
}
