#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int A[100005];
    set<int> s;
    int ans[100005];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = N-1; i >= 0; i--) {
        s.insert(A[i]);
        ans[i] = s.size();
    }
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        cout << ans[x-1] << endl;
    }
}
