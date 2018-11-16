#include <bits/stdc++.h>

#define ld long double
#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define endl '\n'
#define pii pair <ll, ll>
#define pb push_back
#define mp make_pair
#define pi 3.14159265358979323846264
#define y1 abacaba
#define fn "abc"
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end()
#define Need_For_Speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main () {

    Need_For_Speed

    ll n, t, a[100001], k = 0;
    cin >> n >> t;
    for (int i = 1; i <= n - 1; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (i == t) {
            cout << "YES";
            return 0;
        }
        i = a[i] + i - 1;
        if (k <= n) {
            k ++;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "NO";
    return 0;
 }
