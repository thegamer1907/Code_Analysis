#include <iostream>
#include <algorithm>
#include <string.h>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    unordered_map<int, int> e, f;
    int a[111111], n, m, c=0, b;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (!e[a[i]]++)
            c++;
    }

    f[0] = c;
    for (int i=1; i<n; i++) {
        if (!--e[a[i-1]])
            c--;
        f[i] = c;
    }

    for (int i=0; i<m; i++) {
        cin >> b;
        cout << f[b-1] << endl;
    }

    return 0;
}
