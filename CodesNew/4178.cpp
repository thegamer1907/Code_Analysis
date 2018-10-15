#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    vector<ll> prefix(n+1);
    prefix[0] = 0;
    ll temp;
    for(int i = 1; i <= n; ++i) {
        cin >> temp;
        prefix[i] = prefix[i-1] + temp;
    }
    ll sum, prevSum = 0;
    for(int i = 1; i <= q; ++i) {
        cin >> sum;
        sum += prevSum;
        prevSum = sum;
        if(sum >= prefix[n]) {
            cout << n << '\n';
            prevSum = 0;
            continue;
        }
        int start = 0, end = n+1, mid;
        while(end-start>1) {
            mid = (start+end)>>1;
            if(sum >= prefix[mid]) {
                start = mid;
            } else {
                end = mid;
            }
        }
        cout << n-start << '\n';
        if(start == n) {
            
        }
    }
	return 0;
}
