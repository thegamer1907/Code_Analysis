#include <bits/stdc++.h>

#define ll  long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INF (long long) 1e30
#define pii pair<ll ,ll >
using namespace std;


int main() {
//    ifstream cin("input.txt");
//    ofstream cout("output.txt");
//    fast;
    ll h, m, s, t1, t2;

    cin >> h >> m >> s >> t1 >> t2;
    h %= 12;
    h = h * 3600 * 5 + m * 60 * 5 + s * 5;
    m = m * 3600 + s * 60;
    s = s * 3600;
    t1 %= 12;
    t2 %= 12;
    t1 *= 3600 * 5;
    t2 *= 3600 * 5;
    vector<ll> v;
    v.push_back(h);
    v.push_back(s);
    v.push_back(m);
    sort(v.begin(), v.end());
    int k = 0;
    if (t1 < t2) {
        swap(t1, t2);
    }
    while (t1 > v[k] && k < 3) {
        k++;
    }
    if (k == 3) {
        if (t2 < v[0] || t2 > v[2])
            cout << "yes";
        else
            cout << "no";
        return 0;
    }
    if (k == 0) {
        if (t2 < v[0])
            cout << "yes";
        else
            cout << "no";
        return 0;
    }
    if (t2 < v[k] && t2 > v[(k - 1) % 3])
        cout << "yes";
    else
        cout << "no";
    return 0;

}

