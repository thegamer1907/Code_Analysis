#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string inp, wrd;
    cin >> inp;
    int n;
    char a = inp[0], b = inp[1];
    cin >> n;
    int k1 = 0, k2 = 0;
    while (n--) {
        cin >> wrd;
        if (wrd[0] == a && wrd[1] == b) {cout << "YES" << endl; return 0;}
        else if (wrd[1] == a && wrd[0] == b) {cout << "YES" << endl; return 0;}
        if (wrd[1] == a) k1++;
        if (wrd[0] == b) k2++;
    }
    if (k1 && k2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
