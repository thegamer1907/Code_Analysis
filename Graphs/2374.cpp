#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int link[n+1], size[n+1];
    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        size[i] = 1;
        if (p != -1) link[i] = p;
        else link[i] = i;
    }
    for (int j = 1; j <= n; j++) {
        int i = j;
        while (i != link[i]) {
            i = link[i];
            size[j]++;
        }
    }
    cout << *max_element(size+1, size+n+1);
}
