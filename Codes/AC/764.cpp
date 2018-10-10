#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int K;
vector<ll> A;

void recur(int n, int r, ll x) {
    if (n == 1) {
        if (r < 10)
            A.push_back(10*x+r);
    } else {
        for (int i = 0; i <= min(r, 9); i++) {
            if (i == 0 && r == 10)
                continue;
            recur(n-1, r-i, 10*x+i);
        }
    }
}

int main() {
    cin >> K;
    int i = 2;
    while (A.size() < K) {
        recur(i, 10, 0);
        i++;
    }
    sort(A.begin(), A.end());
    cout << A[K-1] << endl;
    return 0;
}
