#include <bits/stdc++.h>

using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    int n, t;
    cin >> n >> t;
    vector<bool> visited(n + 1, false);
    vector<int> jump(n + 1);
    for (int i = 1; i < n; i++) {
        cin >> jump[i];
    }

    int curr = 1;
    while (!visited[curr]) {
        visited[curr] = true;
        curr = curr + jump[curr];
        if(curr == t){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}