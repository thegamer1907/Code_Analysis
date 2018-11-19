#include <bits/stdc++.h>

using namespace std;

int const N = 500;

string s;
int n;
int last[N], first[N];
string p[N];

int main()
{
    //freopen("inp.txt", "r", stdin);
    cin >> s;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            string tmp = p[i] + p[j];
            for (int pos = 0; pos < tmp.size()-1; pos++) {
                string cmp = tmp.substr(pos, 2);
                if (cmp == s) {
                    puts("YES");
                    return 0;
                }
            }
        }
    }
    puts("NO");
}
