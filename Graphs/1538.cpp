#include <bits\stdc++.h>

using namespace std;

int u, t, i, j, n, mini = 9999999, o;

int main() {

    vector<int> vec;
    cin >> n >> t;
    for(i = 0; i < t; i++) {
        cin >> u;
        vec.push_back(u);
    }

    for(i = 1; i < t; i += vec[i - 1]) {}
    i == t ? cout << "YES" : cout << "NO";

}
