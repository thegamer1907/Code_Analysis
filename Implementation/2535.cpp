#include "bits/stdc++.h"
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int res = n;
    while(n--) {
        int a; cin >> a;
        if(a > h) res++;
    }
    cout << res << endl;
}