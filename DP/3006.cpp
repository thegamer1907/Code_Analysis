#include <bits/stdc++.h>

using namespace std;

string a, b;
int n, ans;

int main() {
    cin >> n;
    cin >> a >> b;
    for(int i = 0; i < n-1; i++)
        if(a[i] != b[i] && a[i+1] != b[i+1] && a[i] != a[i+1]) ans++, swap(a[i], a[i+1]);
    for(int i = 0; i < n; i++)
        if(a[i] != b[i]) ans++;
    cout << ans;
    return 0;
}