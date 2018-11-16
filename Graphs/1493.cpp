#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n, w;
    cin >> n >> w;
    vector <int> v(n-1);
    for (auto& item : v)
        cin >> item;
    for (int i = 0; i < n;) {
        i += v[i];
        if (i+1 == w)  {
            cout << "YES";
            return 0;
        }
        else if (i+ 1 > w) {
            cout << "NO";
            return 0;
        }
    }
    return 0;
}
