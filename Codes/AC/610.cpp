#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
const int maxn = 300030;
const int maxm = 100010;


void solve() {
    int k;
    cin >> k;
    int i = 10;
    int sum;
    int t;
    int cnt = 0;
    while(1) {
        sum = 0;
        t = i;
        while(t) sum += t % 10, t /= 10;
        if(sum == 10) cnt++;
        if(cnt == k) {
            cout << i << endl;
            break;
        }
        i++;
    }
}

int main() {
    solve();
    return 0;
}