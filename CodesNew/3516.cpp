#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int total = 0;
    int max_people = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        total += x;
        max_people = max(max_people, x);
    }
    int average = (total + m) / n + ((total + m) % n ? 1 : 0);
    cout << max(max_people, average) << " " << max_people + m << endl;
}
