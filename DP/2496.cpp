#define _USE_MATH_DEFINES
#define EPS 1e-9
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cout << setprecision(12);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int c = 1, m = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) c++;
        else c = 1;
        m = max(m, c);
    }
    cout << m << endl;
}
