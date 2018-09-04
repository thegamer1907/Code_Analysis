#include <bits/stdc++.h>
typedef long long num;
using namespace std;

int main() {
//   ifstream cin{"input.txt"};

    num n, k;
    cin >> n >> k;
    num seq[n];

    unordered_map<num, num> left;
    unordered_map<num, num> right;

    for (int i = 0; i < n; ++i) {
        cin >> seq[i];
        if (right.find(seq[i]) == right.end()) {
            right.insert({ seq[i], 1 });
        } else {
            ++right[seq[i]];
        }
    }

    num answer = 0;
    for (int i = 0; i < n; ++i) {

        --right[seq[i]];

        if (seq[i] % k == 0 && left.find(seq[i] / k) != left.end() && right.find(seq[i] * k) != right.end()) {
            answer += left[seq[i] / k] * right[seq[i] * k];
        }

        if (left.find(seq[i]) == left.end()) {
            left.insert({ seq[i], 1 });
        } else {
            ++left[seq[i]];
        }

    }

    cout << answer << endl;
}
