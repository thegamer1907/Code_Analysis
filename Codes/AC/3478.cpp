#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;

ll numCandies(ll k) {
    ll temp = n;
    ll sum = 0;
    while(temp > 0) {
        ll prev = temp;
        temp -= k;
        if(temp < 0) temp = 0;
        sum += prev - temp;
        temp -= temp/10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ll start = 0, end = n, mid;
    while(end-start > 1) {
        mid = (start+end)/2;
        if(2*numCandies(mid) >= n) {
            end = mid;
        } else start = mid;
    }
    cout << end << '\n';
    return 0;
}















