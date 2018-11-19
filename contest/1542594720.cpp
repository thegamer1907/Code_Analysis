#include <bits/stdc++.h>

#define fr first
#define sc second

using namespace std;
const double PI = acos(-1);
const int NMAX = 1e7, MMAX = 1e9;
typedef unsigned long long u64;
typedef long long ll;

char anf[30];
string getString() {
    scanf(" %s ", anf);
    return string(anf);
}

int main() {
    #ifdef HOME
        freopen("input.txt", "r", stdin);
    #else
//        freopen("numrecovery.in", "r", stdin);
//        freopen("numrecovery.out", "w", stdout);
    #endif
    string s = getString();
    int n;
    scanf("%d", &n);
    string ses[n];
    for (int i = 0; i < n; ++i) {
        ses[i] = getString();
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            string cur = ses[i] + ses[j];
            if (ses[i] == s || ses[j] == s || cur[1] == s[0] && cur[2] == s[1]) {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
