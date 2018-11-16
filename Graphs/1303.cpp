#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int t;
    cin >> t;
    vector<int> a(n+1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i+1];
    }
    vector<bool> visited(n+1, false);
    int cur = 1;
    while (cur != t && !visited[cur]) {
        visited[cur] = true;
        cur = cur + a[cur];
    }
    if (cur==t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}