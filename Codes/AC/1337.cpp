#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    map<string,int> m;
    for (int i = 0; i < N; ++i) {
        string s; cin >> s;
        m[s] += 1;
    }
    for (int i = 0; i < M; ++i) {
        string s; cin >> s;
        m[s] += 2;
    }
    int a=0, b=0, c=0;
    for (auto it = m.begin(); it != m.end(); ++it) {
        if ((*it).second == 1)
            ++a;
        else if ((*it).second == 2)
            ++b;
        else
            ++c;
    }
    if (a + (c+1)/2 > b + c/2)
        cout << "YES";
    else
        cout << "NO";
}