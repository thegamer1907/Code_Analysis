#include <bits/stdc++.h>

using namespace std;

bool check(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n%10;
        n /= 10;
    }
    return sum == 10;
}

int main() {
    int k;
    cin >> k;
    int last = 19;
    while (k > 1) {
        last += 1;
        if (check(last)) k -= 1;
    }
    cout << last;
}
