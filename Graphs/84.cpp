#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, t;
    cin >> N >> t;

    string Q;
    cin >> Q;

    while(t--) {
        auto E = Q;
        for(int i = 1; i < Q.size(); ++i) {
            if (E[i] == 'G' && E[i - 1] == 'B') swap(Q[i], Q[i - 1]);
        }
    }

    cout << Q << endl;
}
