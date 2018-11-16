#include <bits/stdc++.h>
#ifdef DEBUG
#include "_debug.cpp"
#include "callable.hpp/callable.hpp"
#endif
#define endl '\n'
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << n / 2 << endl;
    for(int i = 0; i < n / 2; i++) {
        cout << (i == 0 and n % 2 ? 3 : 2) << " ";
    }
    cout << endl;
    return 0;
}
