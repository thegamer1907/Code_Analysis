#include <iostream>

#define endl "\n"

using namespace std;

string s[500001], s1, s2;
int n, i, j, d;

int main()
{
    //freopen("input.txt.txt", "r", stdin);
    //freopen("output.txt.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (i = 1; i <= n; i++) cin >> s[i];

    for (i = n - 1; i >= 1; i--) {
        s1 = s[i];
        s2 = s[i + 1];
        if (s1 <= s2)
        continue;
        for (j = 0; j < s1.size(); j++) {
            if (j > s2.size()) {
                s1.erase(j, s1.size() - j);
                break;
            }
            else {
                if (s1[j] > s2[j]) {
                    s1.erase(j, j - s1.size());
                    break;
                }
            }
        }
        s[i] = s1;
    }

    for (i = 1; i <= n; i++) cout << s[i] << endl;

    return 0;
}
