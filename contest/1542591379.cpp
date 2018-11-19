#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int main() {

   // freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

    string s;
    int n;

    bool ind1,ind2;
    ind1=ind2=0;

    cin >> s >> n;
    for (int i=0; i<n; i++) {
        string p;
        cin >> p;
        if (p[1]==s[0])
            ind1=1;

        if (p[0]==s[1])
            ind2=1;

        if (p==s) {
            cout << "YES";
            return 0;
        }

    }

    if (ind1 && ind2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
