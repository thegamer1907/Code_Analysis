#include <bits/stdc++.h>

using namespace std;

string s, pas[110];
int n;

int main() {
    cin >> s >> n;
    for (int i = 0; i < n; i++)
        cin >> pas[i];

    bool valid = false;
    for (int i = 0; i < n; i++) {
        if (pas[i] == s) valid = true;
        for (int j = 0; j < n; j++) {
            if (pas[i][1] == s[0] && pas[j][0] == s[1]) valid = true;
            if (pas[i][0] == s[1] && pas[j][1] == s[0]) valid = true;
        }
    }
    if (valid) printf("YES\n");
    else printf("NO\n");

    return 0;
}
