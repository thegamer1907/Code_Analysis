#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int two, three, five, six;
    cin >> two >> three >> five >> six;
    ll sum = 0;
    while(two > 0 && five > 0 && six > 0) {
        sum += 256;
        two--;
        five--;
        six--;
    }
    while(two > 0 && three > 0) {
        sum += 32;
        two--;
        three--;
    }
    cout << sum << '\n';
    return 0;
}































