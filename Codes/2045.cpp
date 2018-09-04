#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#include<iomanip>
#include<utility>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long int ll;
#define sz(x) ((long long int)(x).size())
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    ll ans = 0;
    cin >> n >> k;
    map <ll, ll> lr, rr;
    vector <ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        rr[a[i]]++;
    }
    for (int i = 0;i < n; ++i) {
        if (a[i] % k != 0) {
            rr[a[i]]--;
            lr[a[i]]++;
            continue;
        }
        //cout << lr[a[i] / k] << " " << rr[a[i] * k] << " "<< a[i] << endl;
        rr[a[i]]--;
        ans += lr[a[i] / k] * rr[a[i] * k];
        lr[a[i]]++;
    }
    cout << ans << endl;
    return 0;
}
