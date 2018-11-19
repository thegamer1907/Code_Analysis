#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string P;

string s[105];

int main()
{
    //freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(false);


    cin >> P;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (s[i] == P) {
            cout << "YES";
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][0] == P[1] && s[j][1] == P[0]) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
}
