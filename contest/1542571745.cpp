/*-------------------------------------------------------------------
                            tenacious
-------------------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string s;
    cin >> s;

    int n;
    cin >> n;

    string x;
    int hash1[26] = {}, hash2[26] = {};
    for(int i=0; i<n; i++) {
        cin >> x;
        if(x == s) {
            cout << "YES";
            return 0;
        }
        hash1[x[0]-'a']++;
        hash2[x[1]-'a']++;
    }

    if(hash2[s[0]-'a'] != 0 && hash1[s[1]-'a']) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}

