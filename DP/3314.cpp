#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

#define NMAX 1000002

char s[NMAX];
int pi[NMAX], good[NMAX], cnt[NMAX];

void prefix(char v[], int n) {
    int q = 0;
    pi[1] = 0;
    for (int i = 2; i <= n; i++) {
        while (q && v[i] != v[q + 1]) {
            q = pi[q];
        }
        if (v[i] == v[q + 1])
            q++;
        pi[i] = q;
    }
}

int main () {
    ios_base::sync_with_stdio(false);

    int n;
    // ifstream cin("code.in");
    cin >> (s + 1);
    n = strlen(s + 1);
    prefix(s, n);
    good[pi[n]] = 1;
    for (int i = n - 1; i >= 1; i--) {
        good[pi[i]] |= good[i];
    }

    for (int i = n - 1; i >= 1; i--) {
        cnt[i]++;
        cnt[pi[i]] += cnt[i];
    }

    int idx = 0;
    for (int i = n ; i >= 1; i--) {
        if (good[i] && cnt[i] >= 2) {
            idx = i;
            break;
        }
    }
    if (idx) {
        s[idx + 1] = '\0';
        cout << s + 1 << '\n';
    } else {
        cout << "Just a legend\n";
    }
    return 0;
}
